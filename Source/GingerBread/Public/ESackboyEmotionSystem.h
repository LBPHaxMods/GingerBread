#pragma once
#include "CoreMinimal.h"
#include "ESackboyEmotionSystem.generated.h"

UENUM(BlueprintType)
enum class ESackboyEmotionSystem : uint8 {
    POI,
    HitReact,
    Spawn,
    Acting,
    Emote,
    Limit,
};

