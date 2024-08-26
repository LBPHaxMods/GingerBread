#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackPosition.generated.h"

UENUM(BlueprintType)
enum class EGruntyStackPosition : uint8 {
    Invalid,
    Bottom,
    Middle_Lower,
    Middle_Upper,
    Top,
    NumStates,
};

