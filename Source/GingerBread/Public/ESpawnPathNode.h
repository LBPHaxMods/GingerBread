#pragma once
#include "CoreMinimal.h"
#include "ESpawnPathNode.generated.h"

UENUM(BlueprintType)
enum class ESpawnPathNode : uint8 {
    SpawnPoint,
    MidPoint,
    LandingPoint,
    NumSpawnPathNodes,
};

