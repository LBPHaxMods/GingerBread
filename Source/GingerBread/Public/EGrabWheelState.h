#pragma once
#include "CoreMinimal.h"
#include "EGrabWheelState.generated.h"

UENUM(BlueprintType)
enum class EGrabWheelState : uint8 {
    Idle,
    Grabbed,
};

