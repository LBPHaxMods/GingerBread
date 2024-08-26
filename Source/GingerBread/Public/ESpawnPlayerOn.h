#pragma once
#include "CoreMinimal.h"
#include "ESpawnPlayerOn.generated.h"

UENUM(BlueprintType)
namespace ESpawnPlayerOn {
    enum Type {
        NONE,
        ControllerConnected_SpawnPoint,
        PressX_RespawnCopter,
        PressX_VisibleCheckpoint,
        VisibleCheckpoint,
        Instant,
        Instant_Debug,
    };
}

