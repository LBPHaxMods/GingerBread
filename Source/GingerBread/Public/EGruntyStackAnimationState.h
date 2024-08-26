#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackAnimationState.generated.h"

UENUM(BlueprintType)
enum class EGruntyStackAnimationState : uint8 {
    Invalid,
    AboveSomeone,
    FallingInStack,
    WaitingForSomeoneElseToFall,
    NumStates,
};

