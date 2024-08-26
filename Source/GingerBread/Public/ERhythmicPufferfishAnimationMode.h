#pragma once
#include "CoreMinimal.h"
#include "ERhythmicPufferfishAnimationMode.generated.h"

UENUM()
enum class ERhythmicPufferfishAnimationMode : int32 {
    IdleOnly,
    SwimForwardsOnly,
    SwimInAnyDirection,
    SwimWithAnticipation,
};

