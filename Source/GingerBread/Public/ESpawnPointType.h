#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointType.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointType : uint8 {
    Checkpoint,
    VerticalCheckpoint,
    EntranceGate,
    Doorway,
    WorldMap,
    WorldMapCannon,
    WorldMapMultiplayer,
    CraftCutterTeleporter,
    LevelIntroSequence,
    LevelEndSequence,
};

