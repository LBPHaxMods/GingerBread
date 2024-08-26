#pragma once
#include "CoreMinimal.h"
#include "ERhythmicTransitionCannonBeatMode.generated.h"

UENUM(BlueprintType)
enum class ERhythmicTransitionCannonBeatMode : uint8 {
    LandBeat,
    LaunchBeat,
    LaunchLandBeat,
};

