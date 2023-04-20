#include "pch.h"
#include <Windows.h>
#include <future>
#include "sdk.h"
#include <iostream>

using namespace std;

future<void> main_future;

uint64_t game_base = 0;
UWorld* pWorld = 0;
int post_render_index = 0x63;

using fn = void(__thiscall*)(UObject*, UObject*);

fn original = 0;

void post_render_hook(UObject* viewport_client, UObject* canvas) {

	
	original(viewport_client, canvas);
}


void init() {
	FILE* fDummy;
	AllocConsole();

	freopen_s(&fDummy, "CONOUT$", "w", stdout);
	std::cout.clear();

	game_base = (uint64_t)GetModuleHandleA(0);
	pWorld = *(UWorld**)(game_base + 0x416D390);


	auto game_instance = pWorld->OwningGameInstance;

	auto local_player = *(game_instance->LocalPlayers.Objects[0]);

	auto viewport_client = local_player->ViewportClient;
	 
	void** VFTable = viewport_client->VFTable;

	DWORD protect = 0;

	VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &protect);

	//write to our post_render_Vtable_adr

	original = reinterpret_cast<decltype(original)>(VFTable[post_render_index]);	

	VFTable[post_render_index] = &post_render_hook;

	VirtualProtect(&VFTable[post_render_index], 8, protect, 0);


	/**  Addresses
		Engine:
		UWorld:		0x7FF66CAF75E0					(world->Levels) is empty... no idea nope this is the right one! n i c e
		Names:		0x7FF66C9723C0
		Objects:	0x7FF66C9AE730
	*/


	if (pWorld) {
		auto actors = pWorld->OwningGameInstance->ReferencedObjects;

		for (int j = 0; j < actors.Count; j++) {

			auto object = **(actors.Objects);
			if (object) {
				cout << "[" << j << "] object: " << (uint64_t)object;
			}
		}
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		main_future = std::async(std::launch::async, init);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}

	return true;
}
