#pragma once
#include "CoreMinimal.h"
#include "GatedLockCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGatedLockCountChanged, int32, NewCount);

