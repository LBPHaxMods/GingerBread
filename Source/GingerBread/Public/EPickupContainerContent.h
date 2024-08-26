#pragma once
#include "CoreMinimal.h"
#include "EPickupContainerContent.generated.h"

UENUM(BlueprintType)
namespace EPickupContainerContent {
    enum Type {
        SingleLife,
        BigLife,
        MegaLife,
        ScoreBubble,
        CollectabellSmall,
        CollectabellLarge,
        ScoreMultiplier,
        MemoryOrb,
        VoidEnergy,
        Prize,
        SlapFish,
        Paintbrush,
        Umbrella,
        BubbleBlower,
        PogoStick,
        Unicycle,
        MemoryOrbInLevel,
        Max,
    };
}

