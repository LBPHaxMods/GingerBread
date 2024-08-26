#pragma once
#include "CoreMinimal.h"
#include "EMinibossMeanieGenericState.generated.h"

UENUM(BlueprintType)
enum class EMinibossMeanieGenericState : uint8 {
    Invalid,
    Idle,
    Taunt,
    Movement,
    SlamSignpost,
    SlamAttack,
    PunchSignpost,
    SpinAndShoot,
    BombPop,
    TakeHit,
    Flipped,
    Phase2,
    Death,
    Bubble,
    NumStates,
};

