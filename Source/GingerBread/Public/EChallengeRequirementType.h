#pragma once
#include "CoreMinimal.h"
#include "EChallengeRequirementType.generated.h"

UENUM(BlueprintType)
enum class EChallengeRequirementType : uint8 {
    Integer,
    Distance,
    Count,
};

