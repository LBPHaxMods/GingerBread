#pragma once
#include "CoreMinimal.h"
#include "ERammerSpawnState.generated.h"

UENUM(BlueprintType)
enum class ERammerSpawnState : uint8 {
    Invalid,
    FromGround,
    FromAir,
    FromAirLanded,
    NumStates,
};

