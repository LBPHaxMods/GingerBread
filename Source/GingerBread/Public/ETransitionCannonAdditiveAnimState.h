#pragma once
#include "CoreMinimal.h"
#include "ETransitionCannonAdditiveAnimState.generated.h"

UENUM(BlueprintType)
enum class ETransitionCannonAdditiveAnimState : uint8 {
    NoAnim,
    Gulp,
    Hit,
    NumStates,
};

