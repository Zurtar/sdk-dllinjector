#include "pch.h"
#include <Windows.h>
#include <future>
#include "sdk.h"
#include <iostream>
#include "MinHook/include/MinHook.h"
#include "sdk_functions.h"

using namespace std;

future<void> main_future;

uint64_t game_base = 0;
TUObjectArray* ObjectArray = 0;
UWorld* pWorld = 0;
UEngine* GEngine = 0;

int post_render_index = 0x63;
int process_event_index = 0x44;

using fn = void(__thiscall*)(UGameViewportClient*, UObject*);
using procevent_fn = void(__thiscall*)(UObject*, UObject*, void* params);

fn original = 0;
procevent_fn process_event_original = 0;

FILE* logFile;
string badStyle = "I called a method!";


/*
Alchemy Recipes
Cooking?
Trinket luck/system?
Fishing system
~~ GM Stuff ~~


Object [1eefbc00400][1356] ::Name: MOTrinket  [Class MortalOnline2.MOTrinket]
Object [1eefbbf25c0][1228] ::Name: MORitualPanel  [Class MortalOnline2.MORitualPanel]
Object [1eefbb8ce80][944] ::Name: MOCooking  [Class MortalOnline2.MOCooking]

*/



void post_render_hook(UGameViewportClient* viewport_client, UObject* canvas) {
	auto world = viewport_client->World;

	auto game_instance = viewport_client->GameInstance;

	if (!game_instance->LocalPlayers.Count) return;

	auto local_player = game_instance->LocalPlayers.Objects[0];

	if (!local_player) return;

	for (int i = 0; i < world->Levels.Count; i++) {
		auto level = world->Levels.Objects[i];

		if (level) {
			for (int j = 0; j < level->ActorCluster->Actors.Count; j++) {
				auto actor = level->ActorCluster->Actors.Objects[j];

				if (actor && actor->RootComponent) {
					auto location = actor->K2_GetActorLocation();
					auto rotation = actor->K2_GetActorRotation();

					std::printf("Actor Name:[%s]	 Location:[%.0f, %.0f, %.0f] Rotation:[%0.f, %0.f] \n", actor->GetName().c_str(), location.x, location.z, location.z, rotation.x, rotation.y);
				}
			}
		}
	}

	original(viewport_client, canvas);
}

void process_event_hook(UObject* caller, UObject* fn, void* params) {
	
	if (fn == functions::MOLoginScreen_LogIn_FN) {
		//fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		//caller = ObjectArray->FindObject("BP_MortalOnline2GameModeMenu_C MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnline2GameModeMenu_C_2147482470");
		//caller = ObjectArray->FindObject("MOCheatManager MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnlinePlayerController_C_2147482446.MOCheatManager_2147482432");
		//fn = ObjectArray->FindObject("Function MortalOnline2.MOGameModeMenu.ShowCharacterSelect");
		dumpObjects(logFile);
		return;
		//	fn = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.ForceLogin");

	//	void ForceLogout(); // Function MortalOnline2.MOCheatManager.ForceLogout
	//	void ForceLogin(); // Function MortalOnline2.MOCheatManager.ForceLogin //didnt work try others
	//	void FakeLogin(struct FString sNewFakeID); // Function MortalOnline2.MOCheatManager.FakeLogin
	}


	if (fn == functions::WB_LoginError_MOButtonClose_0_FN || fn == functions::WB_LoginError_MOButtonClose_1_FN) {
		//fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		fn = ObjectArray->FindObject("Function MortalOnline2.MOUserWidget.CloseMOWidget");
	}


	if (fn == functions::Engine_CheatManager_ReceiveEndPlay_FN) { //This was called first. Lets block it.
		//fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		return;
	}

	//if (fn == functions::UMG_UserWidget_Destruct_FN && caller->GetName() != "WB_LoginError" && caller->GetName() != "WB_LoginWarning" && caller->GetName() != "pLoginMessageBox") {
	//	fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
	//	return;
	//}

	if (fn == functions::Engine_GameInstance_ReceiveShutdown_FN) {
		//fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		return;
	}

	//fprintf(logFile, "Caller [%s] Function [%s]\n", caller->GetFullName().c_str(), fn->GetFullName().c_str());
	process_event_original(caller, fn, params);
}

//Caller [WB_LoginError] Function [Function WB_LoginError.WB_LoginError_C.BndEvt__WB_LoginError_MOButtonClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature]



BYTE* vmt_hook(void** VFTable, std::uint32_t index, void* TargetFunction) {

	BYTE* org = reinterpret_cast<BYTE*>(VFTable[index]);
	DWORD protect = 0;

	VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &protect);

	VFTable[index] = TargetFunction;

	VirtualProtect(&VFTable[index], 8, protect, 0);

	return org;
}

void dumpObjects(FILE* logFile) {
	for (uint32_t i = 0; i < ObjectArray->NumElements; i++) {
		auto obj = ObjectArray->GetObjectPtr(i);

		if (obj) {
			std::printf("[%llx][%d] ::: %s  [%s]\n", obj, i, obj->GetName().c_str(), obj->GetFullName().c_str());
			std::fprintf(logFile, "[%llx][%d] ::: %s  [%s]\n", obj, i, obj->GetName().c_str(), obj->GetFullName().c_str());
		}
	}

	std::printf("Object Array [%llx]					Object Count [%d] \n\n", (uint32_t)ObjectArray, ObjectArray->NumElements);
	std::fprintf(logFile, "Object Array [%llx]			Object Count [%d] \n\n", (uint32_t)ObjectArray, ObjectArray->NumElements);
}

void init() {
	FILE* fDummy;

	AllocConsole();
	freopen_s(&fDummy, "conin$", "r+t", stdin);
	freopen_s(&fDummy, "CONOUT$", "w+t", stdout);
	freopen_s(&fDummy, "CONOUT$", "w+t", stderr);

	fopen_s(&logFile, "C:\\Users\\ethan\\OneDrive\\Desktop\\datadump.txt", "w+t");

	std::cout.clear();
	std::cin.clear();
	std::cerr.clear();

	game_base = (uint64_t)GetModuleHandleA(0);
	GEngine = *(UEngine**)(game_base + 0xC8620C8);
	pWorld = *(UWorld**)(game_base + 0xC8675E0);
	ObjectArray = (TUObjectArray*)(game_base + 0xC71E730);
	NamePool = (FNamePool*)(game_base + 0xC6E23C0);

	functions::init();

	auto game_instance = pWorld->OwningGameInstance;

	auto local_player = game_instance->LocalPlayers.Objects[0];

	auto viewport_client = local_player->ViewportClient;

	void** VFTable = viewport_client->VFTable;

	//original = reinterpret_cast<decltype(original)>(vmt_hook(VFTable, post_render_index, &post_render_hook));

	auto process_event_addr = pWorld->GetProcessEventAddr();
//	dumpObjects(logFile);
	//return;

	MH_Initialize();

	MH_CreateHook((LPVOID)process_event_addr, &process_event_hook, reinterpret_cast<void**>(&process_event_original));

	MH_EnableHook((DWORD_PTR*)process_event_addr);

	std::printf("Hooked Process Event			| Address [%llx] [%llx] \n", pWorld->VFTable[process_event_index], &pWorld->VFTable[process_event_index]);
	fprintf(logFile, "Hooked Process Event	| Address [%llx] [%llx] \n", pWorld->VFTable[process_event_index], &pWorld->VFTable[process_event_index]);

	//[279a367f040][37300] ::: MOCheatManager_2147482432  [MOCheatManager MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnlinePlayerController_C_2147482446.MOCheatManager_2147482432]

	

		//std::printf("Hooked Post Render				| Address [%llx] [%llx] \n", VFTable[post_render_index], &VFTable[post_render_index]);
	//fprintf(logFile, "Hooked Post Render		| Address [%llx] [%llx] \n", VFTable[post_render_index], &VFTable[post_render_index]);

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
