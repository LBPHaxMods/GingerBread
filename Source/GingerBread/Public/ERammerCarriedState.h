#pragma once
#include "CoreMinimal.h"
#include "ERammerCarriedState.generated.h"

UENUM(BlueprintType)
enum class ERammerCarriedState : uint8 {
    Invalid,
    CarryLift,
    CarryLoop,
    CarryDrop,
    NumStates,
};

