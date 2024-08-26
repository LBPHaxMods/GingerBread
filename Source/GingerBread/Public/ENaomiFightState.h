#pragma once
#include "CoreMinimal.h"
#include "ENaomiFightState.generated.h"

UENUM(BlueprintType)
enum class ENaomiFightState : uint8 {
    Invalid,
    IdleDoNothing,
    TransitionIdle,
    Punching,
    ChargePunching,
    Laser,
    ShortCircuit,
    AdminMode,
    Enraged,
    FaceHit,
    Defeated,
};

