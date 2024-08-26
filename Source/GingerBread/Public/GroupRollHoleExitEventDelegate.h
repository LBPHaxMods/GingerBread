#pragma once
#include "CoreMinimal.h"
#include "GroupRollHoleExitEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGroupRollHoleExitEvent, int32, splineIndex);

