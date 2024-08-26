#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackBehaviourState.generated.h"

UENUM(BlueprintType)
enum class EGruntyStackBehaviourState : uint8 {
    Invalid,
    NotStacked,
    Stacked_AtBottom_NotFalling,
    Stacked_AtBottom_IAmFalling,
    Stacked_AtBottom_SomeoneElseIsFalling,
    Stacked_AboveSomeone_NotFalling,
    Stacked_AboveSomeone_IAmFalling,
    Stacked_AboveSomeone_SomeoneElseIsFalling,
    Stacked_AboveSomeone_DoingTimberAttack,
    Stacked_AtTop_DoingLaunchAttack,
    Stacked_AboveSomeone_CrashingDown,
};

