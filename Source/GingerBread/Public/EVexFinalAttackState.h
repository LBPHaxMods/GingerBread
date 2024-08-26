#pragma once
#include "CoreMinimal.h"
#include "EVexFinalAttackState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalAttackState : uint8 {
    Invalid,
    FistAttack,
    TricksterAttack,
    ItemAttack,
    SlapAttack,
    OutOfStunSlapAttack,
    BombSpawnAttack,
};

