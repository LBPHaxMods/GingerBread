#pragma once
#include "CoreMinimal.h"
#include "ESpotShadowState.generated.h"

UENUM(BlueprintType)
enum class ESpotShadowState : uint8 {
    Growing,
    Shrinking,
    Grown,
    Shrunk,
};

