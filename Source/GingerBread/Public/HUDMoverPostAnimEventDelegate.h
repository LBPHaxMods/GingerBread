#pragma once
#include "CoreMinimal.h"
#include "HUDMoverPostAnimEventDelegate.generated.h"

class UCollectableHUDMoverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDMoverPostAnimEvent, UCollectableHUDMoverComponent*, mover);

