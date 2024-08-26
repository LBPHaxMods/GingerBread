#pragma once
#include "CoreMinimal.h"
#include "EMamapedeGroundCrackingMode.generated.h"

UENUM(BlueprintType)
enum class EMamapedeGroundCrackingMode : uint8 {
    NotCracked,
    CrackingVertically,
    CrackedVertically,
    CrackingHorizontally,
    CrossCracked,
};

