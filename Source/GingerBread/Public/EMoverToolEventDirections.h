#pragma once
#include "CoreMinimal.h"
#include "EMoverToolEventDirections.generated.h"

UENUM(BlueprintType)
enum class EMoverToolEventDirections : uint8 {
    ForwardsAndBackwards,
    ForwardsOnly,
    BackwardsOnly,
};

