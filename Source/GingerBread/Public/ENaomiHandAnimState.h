#pragma once
#include "CoreMinimal.h"
#include "ENaomiHandAnimState.generated.h"

UENUM(BlueprintType)
enum class ENaomiHandAnimState : uint8 {
    Invalid,
    ArenaEnter,
    Idle,
    ArenaExit,
    Punch,
    FastPunch,
    ChargePunch,
    FaceHit,
};

