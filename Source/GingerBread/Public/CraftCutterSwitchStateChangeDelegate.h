#pragma once
#include "CoreMinimal.h"
#include "CraftCutterSwitchStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraftCutterSwitchStateChange, bool, Active);

