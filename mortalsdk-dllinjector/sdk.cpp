#include "pch.h"
#include "sdk.h"
#include "sdk_functions.h"


FVector AActor::K2_GetActorLocation()
{
    struct {
        FVector return_value;
    } params;

    ProcessEvent(functions::K2_GetActorLocation_FN, &params);
    return params.return_value;
}

FRotator AActor::K2_GetActorRotation()
{
    struct {
        FRotator return_value;
    } params;

    ProcessEvent(functions::K2_GetActorRotation_FN, &params);
    return params.return_value;
}

