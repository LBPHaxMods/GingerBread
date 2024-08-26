#pragma once
#include "CoreMinimal.h"
#include "EMamapedeGenericState.generated.h"

UENUM(BlueprintType)
enum class EMamapedeGenericState : uint8 {
    Invalid,
    ChaseUnderGround,
    SplineMovement,
    SplineMovementEnd,
    RageMiddleRoar,
    WallChargeAnticipate,
    WallChargeAnticipateFast,
    WallChargeMovement,
    WallChargeMovementFast,
    GroundDive,
    VerticalJump_Anticipate,
    VerticalJump_Loop,
    VerticalJump_Ending,
    JumpingFromWall,
    Inflate,
    NumStates,
};

