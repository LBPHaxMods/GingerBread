#pragma once
#include "CoreMinimal.h"
#include "PogoStickChargingEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPogoStickChargingEvent, float, jumpStrength);

