#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleThrowState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleThrowState : uint8 {
    Invalid,
    InAir,
    Land,
    Recover,
    NumStates,
};

