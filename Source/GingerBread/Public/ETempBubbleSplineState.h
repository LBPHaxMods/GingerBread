#pragma once
#include "CoreMinimal.h"
#include "ETempBubbleSplineState.generated.h"

UENUM()
enum class ETempBubbleSplineState : int32 {
    Idle,
    Spawning,
    Spawned,
    AnimatingOut,
    Complete,
    MAX,
};

