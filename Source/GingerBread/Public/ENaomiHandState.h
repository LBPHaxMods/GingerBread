#pragma once
#include "CoreMinimal.h"
#include "ENaomiHandState.generated.h"

UENUM(BlueprintType)
enum class ENaomiHandState : uint8 {
    Invalid,
    Idle,
    PunchCSP,
    NormalPunch,
    ChargePunch,
    CorruptionHit,
    EnterArena,
    ExitArena,
};

