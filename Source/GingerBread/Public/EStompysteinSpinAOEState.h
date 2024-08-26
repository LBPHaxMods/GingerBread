#pragma once
#include "CoreMinimal.h"
#include "EStompysteinSpinAOEState.generated.h"

UENUM()
enum class EStompysteinSpinAOEState : int32 {
    NotSpinning,
    SpinStarted,
    AOEGrowing,
    AOEMaxSize,
    AOEShrinking,
    SpinEnding,
    AOEEnding,
};

