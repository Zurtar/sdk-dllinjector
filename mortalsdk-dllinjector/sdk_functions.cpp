#include "pch.h"
#include "sdk.h"
#include"sdk_functions.h"

extern TUObjectArray* ObjectArray;

namespace functions {	
	UObject* K2_GetActorLocation_FN = 0;

	UObject* K2_GetActorRotation_FN = 0;

	UObject* UMG_UserWidget_Destruct_FN = 0;

	UObject* Engine_CheatManager_ReceiveEndPlay_FN = 0;

	UObject* WB_LoginError_MOButtonClose_0_FN = 0;

	UObject* WB_LoginError_MOButtonClose_1_FN = 0;

	UObject* Engine_GameInstance_ReceiveShutdown_FN = 0;

	UObject* MOLoginScreen_ShowWarning_FN=0;
	
	UObject* MOLoginScreen_ShowError_FN=0;

	UObject* MOLoginScreen_LogIn_FN = 0;

	void init() {
		K2_GetActorLocation_FN = ObjectArray->FindObject("Function Engine.Actor.K2_GetActorLocation");

		K2_GetActorRotation_FN = ObjectArray->FindObject("Function Engine.Actor.K2_GetActorRotation");

		UMG_UserWidget_Destruct_FN = ObjectArray->FindObject("Function UMG.UserWidget.Destruct");

		Engine_CheatManager_ReceiveEndPlay_FN = ObjectArray->FindObject("Function Engine.CheatManager.ReceiveEndPlay");

		//Called when we hit that quit button
		WB_LoginError_MOButtonClose_0_FN = ObjectArray->FindObject("Function WB_LoginError.WB_LoginError_C.BndEvt__WB_LoginError_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

		//Called on the X in the startup menu
		WB_LoginError_MOButtonClose_1_FN = ObjectArray->FindObject("Function WB_LoginError.WB_LoginError_C.BndEvt__WB_LoginError_MOButtonClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

		//We can block this but it still shuts down..
		Engine_GameInstance_ReceiveShutdown_FN = ObjectArray->FindObject("Function Engine.GameInstance.ReceiveShutdown");

		MOLoginScreen_ShowWarning_FN = ObjectArray->FindObject("Function MortalOnline2.MOLoginScreen.ShowWarning");

		MOLoginScreen_ShowError_FN = ObjectArray->FindObject("Function MortalOnline2.MOLoginScreen.ShowError");

		MOLoginScreen_LogIn_FN = ObjectArray->FindObject("Function MortalOnline2.MOLoginScreen.LogIn");

	}
}
