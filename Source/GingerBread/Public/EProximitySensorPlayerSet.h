#pragma once
#include "CoreMinimal.h"
#include "EProximitySensorPlayerSet.generated.h"

UENUM(BlueprintType)
enum class EProximitySensorPlayerSet : uint8 {
    SinglePlayer,
    TwoPlayers,
    ThreePlayers,
    FourPlayers,
    AllLivePlayers,
    AllLiveAndSpawnablePlayers,
};

