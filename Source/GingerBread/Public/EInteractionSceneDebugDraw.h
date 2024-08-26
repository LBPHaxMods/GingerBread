#pragma once
#include "CoreMinimal.h"
#include "EInteractionSceneDebugDraw.generated.h"

UENUM(BlueprintType)
enum class EInteractionSceneDebugDraw : uint8 {
    Disabled,
    OnlyOverlaps,
    AllQueries,
    MaxOption,
};

