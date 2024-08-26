#pragma once
#include "CoreMinimal.h"
#include "ECameraTransitionError.generated.h"

UENUM(BlueprintType)
enum class ECameraTransitionError : uint8 {
    None,
    CameraAreaIsNull,
    CameraBehaviourIsNotLevelUnlockBehaviour,
};

