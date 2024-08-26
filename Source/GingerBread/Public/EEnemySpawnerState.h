#pragma once
#include "CoreMinimal.h"
#include "EEnemySpawnerState.generated.h"

UENUM()
enum class EEnemySpawnerState : int32 {
    Dead,
    Idle,
    Waiting,
    AnticipateSpawn,
    Blocked,
    Spawning,
    Max,
};

