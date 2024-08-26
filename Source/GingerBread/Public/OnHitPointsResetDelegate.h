#pragma once
#include "CoreMinimal.h"
#include "OnHitPointsResetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitPointsReset, int32, previousHitPoints);

