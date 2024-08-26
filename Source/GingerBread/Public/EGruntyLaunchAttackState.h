#pragma once
#include "CoreMinimal.h"
#include "EGruntyLaunchAttackState.generated.h"

UENUM(BlueprintType)
enum class EGruntyLaunchAttackState : uint8 {
    Invalid,
    Start_Top,
    Recovery_Top,
    DoingLaunch_Bottom,
    DoingLaunch_Middle,
    Bottom,
    Middle,
    NumStates,
};

