#pragma once
#include "CoreMinimal.h"
#include "EScoreSource.generated.h"

UENUM(BlueprintType)
enum class EScoreSource : uint8 {
    ScoreBubble,
    PrizeBubble,
    CreativeOrb,
    EnemyKilled,
    Collectabell,
    Heart,
    VoidEnergy,
    Other,
};

