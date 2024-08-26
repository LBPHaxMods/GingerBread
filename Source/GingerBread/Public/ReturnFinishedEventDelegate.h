#pragma once
#include "CoreMinimal.h"
#include "ReturnFinishedEventDelegate.generated.h"

class UCollectableReturnComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnFinishedEvent, UCollectableReturnComponent*, mover);

