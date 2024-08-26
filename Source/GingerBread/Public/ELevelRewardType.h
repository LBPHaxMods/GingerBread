#pragma once
#include "CoreMinimal.h"
#include "ELevelRewardType.generated.h"

UENUM(BlueprintType)
enum class ELevelRewardType : uint8 {
    Collectabell,
    PrizeBubble,
    MemoryOrb,
    GameLevel,
};

