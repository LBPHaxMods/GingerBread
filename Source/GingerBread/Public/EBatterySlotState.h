#pragma once
#include "CoreMinimal.h"
#include "EBatterySlotState.generated.h"

UENUM(BlueprintType)
enum class EBatterySlotState : uint8 {
    Open,
    BatteryInstalling,
    BatteryInstalled,
    BatteryDropping,
    Closed,
};

