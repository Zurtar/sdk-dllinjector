#pragma once
#include "engine.h"
#include <vector>



namespace functions {

	extern UObject* loginScreen;

	extern UObject* K2_GetActorLocation_FN;

	extern UObject* K2_GetActorRotation_FN;

	extern UObject* UMG_UserWidget_Destruct_FN;

	extern UObject* Engine_CheatManager_ReceiveEndPlay_FN;

	extern UObject* WB_LoginError_MOButtonClose_0_FN;

	extern UObject* WB_LoginError_MOButtonClose_1_FN;

	extern UObject* Engine_GameInstance_ReceiveShutdown_FN;

	extern UObject* MOLoginScreen_ShowWarning_FN;

	extern UObject* MOLoginScreen_ShowError_FN;

	extern UObject* MOLoginScreen_LogIn_FN;

	void init();
}