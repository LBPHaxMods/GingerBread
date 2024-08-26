#pragma once
#include "CoreMinimal.h"
#include "EScreenEdgeRespawnBehaviour.generated.h"

UENUM(BlueprintType)
enum class EScreenEdgeRespawnBehaviour : uint8 {
    AlwaysRespawn,
    AlwaysKill,
    DynamicKill,
};

