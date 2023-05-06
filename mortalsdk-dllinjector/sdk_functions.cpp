#include "pch.h"
#include "sdk.h"
#include"sdk_functions.h"

extern TUObjectArray* ObjectArray;

namespace functions {


	namespace actor {
		UObject* K2_GetActorLocation_FN = 0;
		UObject* K2_GetActorRotation_FN = 0;
	}

	namespace cheatmanager {

		 UObject* ReceiveShutdown_FN = 0;

		 UObject* RespawnLocalCharacter_FN = 0;

		 UObject* TriggerCheat_FN = 0;

		 UObject* StressTestServer_FN = 0;

		 UObject* MountAvatarServer_FN = 0;

		 UObject* ForceLogout_FN = 0;

		 UObject* ForceLogin_FN = 0;

		 UObject* FakeLogin_FN = 0;
	}

	namespace engine {
		UObject* Engine_GameInstance_ReceiveShutdown_FN = 0;

	}
	

	UObject* UMG_UserWidget_Destruct_FN = 0;

	UObject* Engine_CheatManager_ReceiveEndPlay_FN = 0;

	UObject* WB_LoginError_MOButtonClose_0_FN = 0;

	UObject* WB_LoginError_MOButtonClose_1_FN = 0;

	UObject* Engine_GameInstance_ReceiveShutdown_FN = 0;

	UObject* MOLoginScreen_ShowWarning_FN=0;
	
	UObject* MOLoginScreen_ShowError_FN=0;

	UObject* MOLoginScreen_LogIn_FN = 0;

	UObject* testFunc_FN = 0;
	


	void init() {
		//actors
		actor::K2_GetActorLocation_FN = ObjectArray->FindObject("Function Engine.Actor.K2_GetActorLocation");

		actor::K2_GetActorRotation_FN = ObjectArray->FindObject("Function Engine.Actor.K2_GetActorRotation");

		UMG_UserWidget_Destruct_FN = ObjectArray->FindObject("Function UMG.UserWidget.Destruct");

		//Called when we hit that quit button
		WB_LoginError_MOButtonClose_0_FN = ObjectArray->FindObject("Function WB_LoginError.WB_LoginError_C.BndEvt__WB_LoginError_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

		//Called on the X in the startup menu
		WB_LoginError_MOButtonClose_1_FN = ObjectArray->FindObject("Function WB_LoginError.WB_LoginError_C.BndEvt__WB_LoginError_MOButtonClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

		//We can block this but it still shuts down..
		Engine_GameInstance_ReceiveShutdown_FN = ObjectArray->FindObject("Function Engine.GameInstance.ReceiveShutdown");

		MOLoginScreen_ShowWarning_FN = ObjectArray->FindObject("Function MortalOnline2.MOLoginScreen.ShowWarning");

		MOLoginScreen_ShowError_FN = ObjectArray->FindObject("Function MortalOnline2.MOLoginScreen.ShowError");

		MOLoginScreen_LogIn_FN = ObjectArray->FindObject("Function MortalOnline2.MOLoginScreen.LogIn");

		testFunc_FN = ObjectArray->FindObject("Function WB_TabButtonNewImage.WB_TabButtonNewImage_C.BndEvt__pButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

		//CHEAT MANAGER
		cheatmanager::RespawnLocalCharacter_FN = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.RespawnLocalCharacter");
		cheatmanager::TriggerCheat_FN = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.TriggerCheat");
		cheatmanager::StressTestServer_FN= ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.StressTestServer");
		cheatmanager::MountAvatarServer_FN = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.MountAvatarServer");
		cheatmanager::ForceLogout_FN = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.ForceLogout");
		cheatmanager::ForceLogin_FN = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.ForceLogin");
		cheatmanager::FakeLogin_FN = ObjectArray->FindObject("Function MortalOnline2.MOCheatManager.FakeLogin");
		


	}
}
namespace objects {
	UMOGlobal* MOGlobal = nullptr;
	AMOCharacter* MOCharacter = nullptr;
	UGeneralProjectSettings* ProjectSettings = nullptr;
	UGameMapsSettings* GameMapSettings = nullptr;
	UGameSessionSettings* GameSessionSettings = nullptr;
	UObject* GeneralEngineSettings = nullptr;
	UGameNetworkManagerSettings* GameNetworkManagerSettings = nullptr;
	AMOGameModeMenu* GameModeMenu = nullptr;
	UMOCheatManager* MainMenuCheat = nullptr;

	void init() {
		MOGlobal = (UMOGlobal*)ObjectArray->FindObject("MOGlobal MortalOnline2.Default__MOGlobal");
		MOCharacter = (AMOCharacter*)ObjectArray->FindObject("MOCharacter MortalOnline2.Default__MOCharacter");
		ProjectSettings = (UGeneralProjectSettings*)ObjectArray->FindObject("GeneralProjectSettings EngineSettings.Default__GeneralProjectSettings");
		GameMapSettings = (UGameMapsSettings*)ObjectArray->FindObject("GameMapsSettings EngineSettings.Default__GameMapsSettings");
		GameSessionSettings = (UGameSessionSettings*)ObjectArray->FindObject("GameSessionSettings EngineSettings.Default__GameSessionSettings");
		GeneralEngineSettings = ObjectArray->FindObject("GeneralEngineSettings EngineSettings.Default__GeneralEngineSettings");
		GameNetworkManagerSettings = (UGameNetworkManagerSettings*)ObjectArray->FindObject("GameNetworkManagerSettings EngineSettings.Default__GameNetworkManagerSettings");
		GameModeMenu = (AMOGameModeMenu*)ObjectArray->FindObject("BP_MortalOnline2GameModeMenu_C MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnline2GameModeMenu_C_2147482470");
		MainMenuCheat = (UMOCheatManager*)ObjectArray->FindObject("MOCheatManager MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnlinePlayerController_C_2147482446.MOCheatManager_2147482432");
	}
};