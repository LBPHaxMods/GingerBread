#pragma once
#include "CoreMinimal.h"
#include "ESackboySpawnAnimType.generated.h"

UENUM(BlueprintType)
enum class ESackboySpawnAnimType : uint8 {
    FirstTime,
    Checkpoint,
    VerticalCheckpoint,
    EntranceGate,
    Doorway,
    WorldMap,
    CraftCutterTeleporter,
    LevelIntroSequence,
};

