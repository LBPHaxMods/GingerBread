#pragma once
#include "CoreMinimal.h"
#include "EAIAnimState.generated.h"

UENUM(BlueprintType)
enum class EAIAnimState : uint8 {
    Idle,
    Alert,
    StandDown,
    Moving,
    Jumping,
    Attack,
    Charge,
    Celebration,
    Dying,
    Interrupted_Damage,
    NumStates,
};

