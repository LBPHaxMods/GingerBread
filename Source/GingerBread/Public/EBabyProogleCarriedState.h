#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleCarriedState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleCarriedState : uint8 {
    Invalid,
    Carried,
    Struggle,
    Escape,
    NumStates,
};

