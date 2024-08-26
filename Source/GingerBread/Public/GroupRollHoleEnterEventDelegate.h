#pragma once
#include "CoreMinimal.h"
#include "GroupRollHoleEnterEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGroupRollHoleEnterEvent, int32, splineIndex);

