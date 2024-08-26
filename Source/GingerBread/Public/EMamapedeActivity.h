#pragma once
#include "CoreMinimal.h"
#include "EMamapedeActivity.generated.h"

UENUM(BlueprintType)
enum class EMamapedeActivity : uint8 {
    Invalid,
    TransitionMove,
    JumpFromWall,
    JumpVertical,
    GroundDive,
    WallToWallCharge,
    BurrowChase,
    SplineFollow,
    Rage,
    RageCentre,
    RageCracking,
    RageHeadPopping,
    NumStates,
};

