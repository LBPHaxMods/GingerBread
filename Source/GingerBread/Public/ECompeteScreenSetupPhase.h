#pragma once
#include "CoreMinimal.h"
#include "ECompeteScreenSetupPhase.generated.h"

UENUM(BlueprintType)
enum class ECompeteScreenSetupPhase : uint8 {
    None,
    Initial,
    PlayerDataReady,
    BronzeTileReady,
    SilverTileReady,
    GoldTileReady,
    PlatinumTileReady,
    DiamondTileReady,
    AllTilesReady,
};

