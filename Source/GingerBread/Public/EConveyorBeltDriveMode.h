#pragma once
#include "CoreMinimal.h"
#include "EConveyorBeltDriveMode.generated.h"

UENUM(BlueprintType)
namespace EConveyorBeltDriveMode {
    enum Type {
        Spline,
        XAxis,
        YAxis,
        ZAxis,
    };
}

