#pragma once
#include "CoreMinimal.h"
#include "ProgressionIncrementEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressionIncrementEvent, int32, currentIncrement);

