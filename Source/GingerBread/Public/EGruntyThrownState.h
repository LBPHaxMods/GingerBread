#pragma once
#include "CoreMinimal.h"
#include "EGruntyThrownState.generated.h"

UENUM(BlueprintType)
enum class EGruntyThrownState : uint8 {
    Invalid,
    InAir,
    Land,
    NumStates,
};

