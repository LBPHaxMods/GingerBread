#pragma once
#include "CoreMinimal.h"
#include "EKingFrooglePhaseTransition.generated.h"

UENUM(BlueprintType)
enum class EKingFrooglePhaseTransition : uint8 {
    Invalid,
    Standard,
    Alternate,
    NumStates,
};

