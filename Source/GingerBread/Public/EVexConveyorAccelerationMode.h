#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorAccelerationMode.generated.h"

UENUM(BlueprintType)
enum class EVexConveyorAccelerationMode : uint8 {
    Invalid,
    NotMoving,
    ConstantNormalSpeed,
    ConstantFastSpeed,
    InitialStartup,
    MoveFast_Forward_SpeedingUp,
    MoveFast_Forward_SlowingDown,
    MoveFast_Backward_SpeedingUp,
    MoveFast_Backward_SlowingDown,
    SlowToStop_Rage,
    SlowToStop_Dying,
    TurnOnSpot_Clockwise_SpeedingUp,
    TurnOnSpot_Clockwise_SlowingDown,
    TurnOnSpot_AntiClockwise_SpeedingUp,
    TurnOnSpot_AntiClockwise_SlowingDown,
};

