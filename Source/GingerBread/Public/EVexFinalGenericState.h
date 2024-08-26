#pragma once
#include "CoreMinimal.h"
#include "EVexFinalGenericState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalGenericState : uint8 {
    Invalid,
    OffScreen,
    Vanishing,
    Revealing,
    Idle,
    Stunned,
    TakeHit,
    Attacking,
    BreakFloor,
    BreakWalls,
    FullBodySpeechLine,
};

