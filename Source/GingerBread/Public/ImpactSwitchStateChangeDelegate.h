#pragma once
#include "CoreMinimal.h"
#include "ImpactSwitchStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FImpactSwitchStateChange, bool, Active);

