#pragma once
#include "CoreMinimal.h"
#include "EHitPointsBoundsUpdateMode.generated.h"

UENUM(BlueprintType)
enum class EHitPointsBoundsUpdateMode : uint8 {
    Radius,
    Cached,
    Dynamic,
};

