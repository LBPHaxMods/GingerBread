#pragma once
#include "CoreMinimal.h"
#include "EMamapedeCameraMode.generated.h"

UENUM(BlueprintType)
enum class EMamapedeCameraMode : uint8 {
    Default,
    JumpFromWall,
    WallCharge,
    NumStates,
};

