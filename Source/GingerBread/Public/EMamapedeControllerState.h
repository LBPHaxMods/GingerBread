#pragma once
#include "CoreMinimal.h"
#include "EMamapedeControllerState.generated.h"

UENUM(BlueprintType)
enum class EMamapedeControllerState : uint8 {
    Invalid,
    BurrowChase,
    GroundDive,
    VerticalJump,
    FollowSpline,
    WallCharge,
    Rage,
};

