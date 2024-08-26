#pragma once
#include "CoreMinimal.h"
#include "EChassisType.generated.h"

UENUM(BlueprintType)
enum EChassisType {
    Unassigned,
    SmallGroundChassis,
    LargeGroundChassis,
    BoatChassis,
    UnderwaterVehicleChassis,
    AircraftChassis,
};

