#pragma once
#include "CoreMinimal.h"
#include "ESportsImpactSwitchStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsImpactSwitchStateChange, bool, Active);

