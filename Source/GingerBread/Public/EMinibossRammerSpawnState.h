#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerSpawnState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerSpawnState : uint8 {
    Invalid,
    FromGround,
    FromAir,
    FromAirLanded,
    NumStates,
};

