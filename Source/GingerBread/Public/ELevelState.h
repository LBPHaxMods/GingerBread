#pragma once
#include "CoreMinimal.h"
#include "ELevelState.generated.h"

UENUM(BlueprintType)
enum class ELevelState : uint8 {
    Locked,
    AwaitingCostumeShopVisit,
    AwaitingUnlock,
    Unlocked,
    AwaitingDestruction,
    Cooldown,
    Count,
};

