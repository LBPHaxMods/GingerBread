#pragma once
#include "CoreMinimal.h"
#include "HeadSpinCompleteDelegate.generated.h"

class UCollectableHeadSpinComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeadSpinComplete, UCollectableHeadSpinComponent*, mover);

