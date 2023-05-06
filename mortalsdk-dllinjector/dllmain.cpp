#include "pch.h"
#include <Windows.h>
#include <future>
#include "sdk.h"
#include <iostream>
#include "MinHook/include/MinHook.h"
#include "sdk_functions.h"
#include "sdk_objects.h"

using namespace std;

future<void> main_future;

uint64_t game_base = 0;
TUObjectArray* ObjectArray = 0;

UWorld* GWorld = 0;
UEngine* GEngine = 0;

UWorld* MainMenuWorld;
UMOGameInstance* EngineGameInstance; //no idea whattocall this as its just weird. 

int post_render_index = 0x63;
int process_event_index = 0x44;

using fn = void(__thiscall*)(UGameViewportClient*, UObject*);
using procevent_fn = void(__thiscall*)(UObject*, UObject*, void* params);

fn original = 0;
procevent_fn process_event_original = 0;

FILE* logFile;

bool loging = false;

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

void post_render_hook(UGameViewportClient* viewport_client, UObject* canvas) {

	auto world = viewport_client->World;

	auto game_instance = viewport_client->GameInstance;

	if (!game_instance->LocalPlayers.Count) return;

	auto local_player = game_instance->LocalPlayers.Objects[0];

	if (!local_player) return;

	for (int i = 0; i < world->Levels.Count; i++) {
		auto level = MainMenuWorld->PersistentLevel;
		
		if (level) {
			for (int j = 0; j < level->NearActors.Count; j++) {
				auto actor = level->NearActors.Objects[j];

				if (actor && actor->RootComponent) {
					fprintf(logFile,"Actor Name:[%s]\n", actor->GetFullName().c_str());
				}
			}
		}
	}

	original(viewport_client, canvas);
}

void process_event_hook(UObject* caller, UObject* fn, void* params) {

	if (fn == functions::MOLoginScreen_LogIn_FN) {
	//	printf("BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
	//	fprintf(logFile,"BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
	//	fflush(stdout);

	//	caller = (UObject*)objects::GameModeMenu;
	//	fn = ObjectArray->FindObject("Function MortalOnline2.MOGameModeMenu.ShowCharacterSelect");
	}
	
	if (fn == functions::testFunc_FN) {
		printf("BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		
		//caller = ObjectArray->FindObject("WB_CharacterCreationNew_C Transient.GameEngine_2147482598.BP_MortalOnlineGameInstance_C_2147482582.WB_MO_LoginHUD_C_2147482426.WidgetTree.pMOCharacterCreationNew");
		//fn = ObjectArray->FindObject("Function MortalOnline2.MOCharacterCreationNew.CreateCharacter");
		//process_event_original(caller, fn, params);
		
		//caller = (UObject*)objects::GameModeMenu;
		//UObject* bankerGenerated = ObjectArray->FindObject("MOCharacterAIGenerated MortalOnline2.Default__MOCharacterAIGenerated");
		
		
		//CreateCharacter(struct FString sName, struct FString sSurName, int32_t iStartingPoint, int32_t iStartingEquipment, struct FMOCharacterBodyData BodyData, struct FMOCharacterDecorationData DecorationData, struct FMOCharacterFaceCustomizationData FaceCustomizationData); // Function MortalOnline2.MOGameModeMenu.CreateCharacter
		
		process_event_original(objects::GameModeMenu, ObjectArray->FindObject("Function MortalOnline2.MOGameModeMenu.SelectCharacter"),params); //THIS FUCKING DID IT, I mean we're stuck on loading player data but hey progres..
		loging = true;
		
		fprintf(logFile, "SENT SELECT CHARACTER");
		fflush(stdout);
		return;
	}

	
	if (fn == functions::WB_LoginError_MOButtonClose_0_FN || fn == functions::WB_LoginError_MOButtonClose_1_FN) {
		//fprintf(logFile, "BLOCKED :: Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
		fn = ObjectArray->FindObject("Function MortalOnline2.MOUserWidget.CloseMOWidget");
	}

	if (loging) {
	//	fprintf(logFile, "Caller [%s] Function [%s]\n", caller->GetName().c_str(), fn->GetFullName().c_str());
	}
	process_event_original(caller, fn, params);
}

BYTE* vmt_hook(void** VFTable, std::uint32_t index, void* TargetFunction) {

	BYTE* org = reinterpret_cast<BYTE*>(VFTable[index]);
	DWORD protect = 0;

	VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &protect);

	VFTable[index] = TargetFunction;

	VirtualProtect(&VFTable[index], 8, protect, 0);

	return org;
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
	GWorld = *(UWorld**)(game_base + 0xC8675E0);
	ObjectArray = (TUObjectArray*)(game_base + 0xC71E730);
	NamePool = (FNamePool*)(game_base + 0xC6E23C0);

	functions::init();
	objects::init();

	MainMenuWorld = (UWorld*)ObjectArray->FindObject("World MainMenu_P.MainMenu_P");

	EngineGameInstance = (UMOGameInstance*)ObjectArray->FindObject("BP_MortalOnlineGameInstance_C Transient.GameEngine_2147482598.BP_MortalOnlineGameInstance_C_2147482582");

	

	//auto menu_game_instance = MainMenuWorld->OwningGameInstance;
	
	//auto local_player = EngineGameInstance->LocalPlayers.Objects[0];

//	auto viewport_client = local_player->ViewportClient;

//	void** VFTable = viewport_client->VFTable;

	//original = reinterpret_cast<decltype(original)>(vmt_hook(VFTable, post_render_index, &post_render_hook));

	auto process_event_addr = GWorld->GetProcessEventAddr();

	MH_Initialize();

	MH_CreateHook((LPVOID)process_event_addr, &process_event_hook, reinterpret_cast<void**>(&process_event_original));

	MH_EnableHook((DWORD_PTR*)process_event_addr);

	std::printf("Hooked Process Event			| Address [%llx] [%llx] \n", GWorld->VFTable[process_event_index], &GWorld->VFTable[process_event_index]);

	fflush(stdout);
	/*	
	auto process_event_addr = GWorld->GetProcessEventAddr();
	*/
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


/**

Easy Anti Cheat Subsystem, this is what calls the Inti and get state... intercept it? 
MOEOSSubsystem_2147482594  [MOEOSSubsystem Transient.GameEngine_2147482598.MOEOSSubsystem_2147482594] 

OnlineSession
 OnlineSession_2147482532  [OnlineSession Transient.GameEngine_2147482598.BP_MortalOnlineGameInstance_C_2147482582.OnlineSession_2147482532]

 
 	void CheckConnection(); // Function WB_MO_LoginScreen.WB_MO_LoginScreen_C.CheckConnection
	
	its a struct, but maybe we can alter the ip it checks to a local host that returns a postive response
	::: LoginServerInfo  [ScriptStruct MortalOnline2.LoginServerInfo]
 

 UMOReportWindow // they log stuff

 Could be neat consdiering the dataTable stuff. 
 ScriptViewportClient  [Class Engine.ScriptViewportClient]

 SimulatedClientNetConnection  [Class Engine.SimulatedClientNetConnection]


 ServerConsole  [Function MortalOnline2.MOCheatManager.ServerConsole]
 SetServer  [Function MortalOnline2.MOCheatManager.SetServer]
 ShowHorridUI  [Function MortalOnline2.MOCheatManager.ShowHorridUI]
 StressTestServer  [Function MortalOnline2.MOCheatManager.StressTestServer]
 TriggerCheat  [Function MortalOnline2.MOCheatManager.TriggerCheat]
 MOGlobal  [Class MortalOnline2.MOGlobal]
 BPEvent_InitGM  [Function MortalOnline2.MOCharacterGM.BPEvent_InitGM]
 EnableCheats  [Function Engine.PlayerController.EnableCheats]


 Whats our controller  -- ADkjsaKJDkjhQSHKjdashjkdg!!
 BP_MortalOnlinePlayerController_C_2147482446
 [229dacb2e20][37267] ::: BP_MortalOnlinePlayerController_C_2147482446  [BP_MortalOnlinePlayerController_C MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnlinePlayerController_C_2147482446]

 ***/
