#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterThrowType.generated.h"

UENUM(BlueprintType)
enum class EVexEncounterThrowType : uint8 {
    BombAnim,
    HandAnim,
    SpikeyRollerAnim,
    SpikeyRollerEarlySpawn,
    SpikeyRollerThrow,
    SpikeyRollerSequenceSpawn1,
    SpikeyRollerSequenceSpawn2,
    SpikeyRollerSequenceThrow1,
    SpikeyRollerSequenceThrow2,
    VortexSpawn,
    VortexWindDown,
    VortexSpawnBombs,
    VortexTriggerLeft,
    VortexTriggerRight,
    VortexDisappearBombs,
    RemoveProjectiles,
};

