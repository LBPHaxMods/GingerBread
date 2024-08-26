#pragma once
#include "CoreMinimal.h"
#include "EPickupContainerSpawnCondition.generated.h"

UENUM(BlueprintType)
namespace EPickupContainerSpawnCondition {
    enum Type {
        AlwaysSpawn,
        UseConditionTable,
        Max,
    };
}

