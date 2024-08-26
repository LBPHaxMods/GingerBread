#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.generated.h"

UENUM(BlueprintType)
enum class EMamapedeMovementMode : uint8 {
    Inavlid,
    BurrowChase,
    TransitionMove,
    GroundDive,
    VerticalJump,
    WallCharge,
    FollowSpline,
    JumpFromWall,
    RageCracking,
    RageCentre,
    RageHeadPop,
};

