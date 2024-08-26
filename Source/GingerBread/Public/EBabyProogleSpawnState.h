#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleSpawnState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleSpawnState : uint8 {
    Invalid,
    SpawnInAir,
    SpawnInAirLanded,
    NumStates,
};

