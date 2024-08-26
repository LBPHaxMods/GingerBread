#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackFallingState.generated.h"

UENUM(BlueprintType)
enum class EGruntyStackFallingState : uint8 {
    NotFalling,
    Falling_OnTopOfSomeone,
    Falling_WithGapUnderneath,
};

