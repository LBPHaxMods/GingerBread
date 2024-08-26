#pragma once
#include "CoreMinimal.h"
#include "EMemoryOrbSpawnType.generated.h"

UENUM()
enum class EMemoryOrbSpawnType : int32 {
    PreExisting,
    StaticSpawn,
    SplineSpawn,
    ShatteredCompleted,
};

