#pragma once
#include "CoreMinimal.h"
#include "ECheckpointSequenceRequest.generated.h"

UENUM(BlueprintType)
enum class ECheckpointSequenceRequest : uint8 {
    None,
    FadeToBlack,
    CameraPanToSpawnPoint,
    CustomReset,
    InstantRestart,
    KillCamZoom,
    KillCamTimeDilation,
};

