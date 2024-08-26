#pragma once
#include "CoreMinimal.h"
#include "EHitReactionRecoveryPose.generated.h"

UENUM(BlueprintType)
enum class EHitReactionRecoveryPose : uint8 {
    Standing,
    OnBack,
    OnFront,
    Sitting,
};

