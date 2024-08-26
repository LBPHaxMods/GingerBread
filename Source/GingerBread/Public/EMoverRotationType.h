#pragma once
#include "CoreMinimal.h"
#include "EMoverRotationType.generated.h"

UENUM(BlueprintType)
enum class EMoverRotationType : uint8 {
    None,
    Constant,
    MatchesMotion,
    Oscillating,
};

