#pragma once
#include "CoreMinimal.h"
#include "EEndSequenceCameraState.generated.h"

UENUM(BlueprintType)
enum class EEndSequenceCameraState : uint8 {
    Inactive,
    FixedCamera,
    FollowCamera,
};

