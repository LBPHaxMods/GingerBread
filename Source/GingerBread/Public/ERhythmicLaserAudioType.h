#pragma once
#include "CoreMinimal.h"
#include "ERhythmicLaserAudioType.generated.h"

UENUM(BlueprintType)
enum class ERhythmicLaserAudioType : uint8 {
    Static,
    BackAndForth,
    CircularRotation,
};

