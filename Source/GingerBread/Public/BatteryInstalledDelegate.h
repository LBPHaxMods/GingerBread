#pragma once
#include "CoreMinimal.h"
#include "BatteryInstalledDelegate.generated.h"

class ABattery;
class ABatterySlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBatteryInstalled, ABatterySlot*, BatterySlot, ABattery*, Battery);

