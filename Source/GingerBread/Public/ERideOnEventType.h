#pragma once
#include "CoreMinimal.h"
#include "ERideOnEventType.generated.h"

UENUM(BlueprintType)
enum class ERideOnEventType : uint8 {
    EventDispatcher,
    EnemySpawner,
    BombSpawner,
    CameraChanger,
    VehicleSpeedChanger,
    SublevelLoader,
    MultiplayerEnemySpawner,
    TeleportEvent,
    BlockerMotif,
    ZoneEvent,
};

