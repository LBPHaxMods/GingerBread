#pragma once
#include "CoreMinimal.h"
#include "ERhythmicPufferfishAnimState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicPufferfishAnimState : uint8 {
    Idle,
    Anticipation,
    Swimming,
};

