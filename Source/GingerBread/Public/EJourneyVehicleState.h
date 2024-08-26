#pragma once
#include "CoreMinimal.h"
#include "EJourneyVehicleState.generated.h"

UENUM(BlueprintType)
enum class EJourneyVehicleState : uint8 {
    Unknown,
    Visible,
    Hidden,
};

