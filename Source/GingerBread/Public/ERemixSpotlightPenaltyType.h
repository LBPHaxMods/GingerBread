#pragma once
#include "CoreMinimal.h"
#include "ERemixSpotlightPenaltyType.generated.h"

UENUM(BlueprintType)
enum class ERemixSpotlightPenaltyType : uint8 {
    TimeMultiplier,
    TimeOffset,
};

