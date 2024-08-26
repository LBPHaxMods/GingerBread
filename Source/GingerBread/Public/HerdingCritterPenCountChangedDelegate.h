#pragma once
#include "CoreMinimal.h"
#include "HerdingCritterPenCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHerdingCritterPenCountChanged, int32, PreviousCount, int32, NewCount);

