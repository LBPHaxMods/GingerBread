#pragma once
#include "CoreMinimal.h"
#include "OnHangingHiveBurstEventDelegate.generated.h"

class AHangingHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHangingHiveBurstEvent, AHangingHive*, Hive);

