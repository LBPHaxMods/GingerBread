#pragma once
#include "CoreMinimal.h"
#include "EAISlideState.generated.h"

UENUM(BlueprintType)
enum class EAISlideState : uint8 {
    Invalid,
    SlideStart,
    SlideRecovery,
    NumStates,
};

