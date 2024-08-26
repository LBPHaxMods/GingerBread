#pragma once
#include "CoreMinimal.h"
#include "BatterySlotActivatedDelegate.generated.h"

class ABatterySlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBatterySlotActivated, ABatterySlot*, BatterySlot);

