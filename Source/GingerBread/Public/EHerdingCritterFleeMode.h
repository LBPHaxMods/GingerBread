#pragma once
#include "CoreMinimal.h"
#include "EHerdingCritterFleeMode.generated.h"

UENUM(BlueprintType)
enum class EHerdingCritterFleeMode : uint8 {
    AwayFromSackboy,
    TowardSackboy,
};

