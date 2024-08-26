#pragma once
#include "CoreMinimal.h"
#include "EBabyFroogleGenericState.generated.h"

UENUM(BlueprintType)
enum class EBabyFroogleGenericState : uint8 {
    Invalid,
    Standing,
    Hopping,
    Hit,
    Celebrating,
    Dead,
    BeingCarried,
    Thrown,
    Bubble,
    NumStates,
};

