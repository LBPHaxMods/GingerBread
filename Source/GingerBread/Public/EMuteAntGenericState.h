#pragma once
#include "CoreMinimal.h"
#include "EMuteAntGenericState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntGenericState : uint8 {
    Invalid,
    Standing,
    Charge,
    Celebrating,
    Bash,
    Notice,
    DislodgeSpear,
    Throwing,
    Death,
    HitState,
    Vulnerable,
    KnockDown,
    Carried,
    Thrown,
    NumStates,
};

