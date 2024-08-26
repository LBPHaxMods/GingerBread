#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleGrabbedState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleGrabbedState : uint8 {
    Invalid,
    Struggle,
    Slammed,
    Dazed,
    NumStates,
};

