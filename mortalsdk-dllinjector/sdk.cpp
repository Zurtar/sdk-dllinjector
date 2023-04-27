#include "pch.h"
#include "sdk.h"
#include "sdk_functions.h"




FVector AActor::K2_GetActorLocation()
{
    struct {
        FVector return_value;
    } params;

    ProcessEvent(functions::actor::K2_GetActorLocation_FN, &params);
    return params.return_value;
}

FRotator AActor::K2_GetActorRotation()
{
    struct {
        FRotator return_value;
    } params;

    ProcessEvent(functions::actor::K2_GetActorRotation_FN, &params);
    return params.return_value;
}

void UMOCheatManager::RespawnLocalCharacter(bool bResurect) {
   
    ProcessEvent(functions::cheatmanager::RespawnLocalCharacter_FN, (void*)bResurect);
    return;
}

void UMOCheatManager::TriggerCheat() {
    struct {
        
    } params;


    ProcessEvent(functions::cheatmanager::TriggerCheat_FN, &params);
    return;
}

void UMOCheatManager::StressTestServer() {
    struct {

    } params;


    ProcessEvent(functions::cheatmanager::StressTestServer_FN, &params);
    return;
}
void UMOCheatManager::MountAvatarServer() {
    struct {

    } params;


    ProcessEvent(functions::cheatmanager::MountAvatarServer_FN, &params);
    return;


}
void UMOCheatManager::ForceLogin() {
    struct {

    } params;


    ProcessEvent(functions::cheatmanager::ForceLogin_FN, &params);
    return;
}

void UMOCheatManager::ForceLogout() {
    struct {

    } params;


    ProcessEvent(functions::cheatmanager::ForceLogout_FN, &params);
    return;
}

void UMOCheatManager::FakeLogin(const char* name) {

    ProcessEvent(functions::cheatmanager::ForceLogout_FN, &name);
    return;
}





namespace cheatmanager {

	UObject* MountAvatarServer_FN = 0;

	UObject* ForceLogout_FN = 0;

	UObject* ForceLogin_FN = 0;

	UObject* FakeLogin_FN = 0;
}