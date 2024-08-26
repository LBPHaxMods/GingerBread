#pragma once
#include "CoreMinimal.h"
#include "ERhythmicTransitionCannonAdditiveAnimState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicTransitionCannonAdditiveAnimState : uint8 {
    NoAnim,
    Gulp,
    Hit,
    NumStates,
};

