#pragma once
#include "CoreMinimal.h"
#include "EPickupContainerSpawnAmount.generated.h"

UENUM(BlueprintType)
namespace EPickupContainerSpawnAmount {
    enum Type {
        One,
        HalfPlayerCount,
        PlayerCount,
        UseConditionTable,
        Max,
    };
}

