#pragma once
#include "CoreMinimal.h"
#include "EGruntyAdditiveState.generated.h"

UENUM(BlueprintType)
enum class EGruntyAdditiveState : uint8 {
    Invalid,
    FlippedRolledInto,
    NumStates,
};

