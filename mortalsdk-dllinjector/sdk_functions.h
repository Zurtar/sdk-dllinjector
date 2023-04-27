#pragma once
#include "engine.h"
#include <vector>



namespace functions {


	namespace actor {
	extern UObject* K2_GetActorLocation_FN;
	extern UObject* K2_GetActorRotation_FN;
	}
	
	extern UObject* loginScreen;
	
	extern UObject* UMG_UserWidget_Destruct_FN;

	extern UObject* WB_LoginError_MOButtonClose_0_FN;

	extern UObject* WB_LoginError_MOButtonClose_1_FN;

	extern UObject* MOLoginScreen_ShowWarning_FN;

	extern UObject* MOLoginScreen_ShowError_FN;

	extern UObject* MOLoginScreen_LogIn_FN;

	namespace cheatmanager {

		extern UObject* RespawnLocalCharacter_FN;

		extern UObject* TriggerCheat_FN;

		extern UObject* StressTestServer_FN;

		extern UObject* MountAvatarServer_FN;

		extern UObject* ForceLogout_FN;

		extern UObject* ForceLogin_FN;

		extern UObject* FakeLogin_FN;
	}
		/*	
		* 	void RespawnLocalCharacter(bool bResurrect); // Function MortalOnline2.MOCheatManager.RespawnLocalCharacter
			void TriggerCheat(); // Function MortalOnline2.MOCheatManager.TriggerCheat

			void StressTestServer(); // Function MortalOnline2.MOCheatManager.StressTestServer
			void MountAvatarServer(); // Function MortalOnline2.MOCheatManager.MountAvatarServer
			void ForceLogout(); // Function MortalOnline2.MOCheatManager.ForceLogout
			void ForceLogin(); // Function MortalOnline2.MOCheatManager.ForceLogin
			void FakeLogin(struct FString sNewFakeID);*/


	void init();
}