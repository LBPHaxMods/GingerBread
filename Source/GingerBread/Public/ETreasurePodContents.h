#pragma once
#include "CoreMinimal.h"
#include "ETreasurePodContents.generated.h"

UENUM(BlueprintType)
enum class ETreasurePodContents : uint8 {
    ScoreBubble,
    Collectabell,
    PrizeBubble,
    Life,
    Enemy,
    CombatToy,
    Explosion,
};

