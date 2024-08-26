#pragma once
#include "CoreMinimal.h"
#include "EGruntyTimberState.generated.h"

UENUM(BlueprintType)
enum class EGruntyTimberState : uint8 {
    Invalid,
    WaitForFall,
    Fall_AtBottom,
    Fall_AboveSomeone,
    Fall_Loop,
    Landed,
    Recovery,
    NumStates,
};

