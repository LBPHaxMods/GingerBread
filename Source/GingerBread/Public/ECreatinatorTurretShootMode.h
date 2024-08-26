#pragma once
#include "CoreMinimal.h"
#include "ECreatinatorTurretShootMode.generated.h"

UENUM(BlueprintType)
enum class ECreatinatorTurretShootMode : uint8 {
    TrackPlayers,
    ConstantFire,
    Manual,
};

