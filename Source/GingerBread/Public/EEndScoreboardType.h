#pragma once
#include "CoreMinimal.h"
#include "EEndScoreboardType.generated.h"

UENUM(BlueprintType)
enum class EEndScoreboardType : uint8 {
    Normal,
    Void,
    SpotlightRace,
    Gauntlet,
    DroneChase,
};

