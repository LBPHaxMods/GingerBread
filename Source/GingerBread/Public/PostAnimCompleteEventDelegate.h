#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PostAnimCompleteEventDelegate.generated.h"

class UCollectablePickupMoverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPostAnimCompleteEvent, UCollectablePickupMoverComponent*, mover, FVector, OrbLocation, FVector, OrbPreviousLocation);

