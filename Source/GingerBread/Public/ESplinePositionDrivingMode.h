#pragma once
#include "CoreMinimal.h"
#include "ESplinePositionDrivingMode.generated.h"

UENUM(BlueprintType)
enum class ESplinePositionDrivingMode : uint8 {
    SackboyDriven,
    ConstantSpeed,
    ExternallyDriven,
};

