#pragma once
#include "CoreMinimal.h"
#include "ERhythmicFlameJetAudioState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicFlameJetAudioState : uint8 {
    Off,
    WarmUp,
    On,
};

