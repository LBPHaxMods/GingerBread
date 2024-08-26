#pragma once
#include "CoreMinimal.h"
#include "EMamapedeVFXType.generated.h"

UENUM(BlueprintType)
enum class EMamapedeVFXType : uint8 {
    Invalid,
    GroundDive_ExitGround,
    GroundDive_EnterGround,
    VerticalJump_ExitGround,
    VerticalJump_EnterGround,
    FollowSpline_ExitGround,
    FollowSpline_EnterGround,
    WallCharge_ExitWall,
    WallCharge_EnterWall,
    WallCharge_Destruction,
    JumpFromWall_ExitWall,
    JumpFromWall_EnterGround,
    RageCracking_InflateOneShot,
    RageHeadPop_Signpost,
};

