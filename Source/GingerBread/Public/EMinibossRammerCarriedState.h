#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerCarriedState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerCarriedState : uint8 {
    Invalid,
    CarryLift,
    CarryLoop,
    CarryDrop,
    NumStates,
};

