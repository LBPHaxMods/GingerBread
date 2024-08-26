#pragma once
#include "CoreMinimal.h"
#include "ETooltipCategory.generated.h"

UENUM(BlueprintType)
enum class ETooltipCategory : uint8 {
    General,
    GeneralAfterLevel,
    GeneralAfterWorld,
    WorldMap,
    WorldMapAfterShop,
    WorldMapAfterTrials,
    FirstTipInLevel,
    FirstTipInMultiplayer,
    FirstTipInVoidLevel,
    FirstTipInRemixLevel,
    Count,
};

