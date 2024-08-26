#pragma once
#include "CoreMinimal.h"
#include "ETotemMasterGenericState.generated.h"

UENUM(BlueprintType)
enum class ETotemMasterGenericState : uint8 {
    Invalid,
    Idle,
    Flight,
    Shoot,
    Overdrive,
    HitReaction,
    Floor,
    Death,
    NumStates,
};

