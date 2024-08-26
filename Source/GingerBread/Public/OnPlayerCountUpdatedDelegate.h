#pragma once
#include "CoreMinimal.h"
#include "OnPlayerCountUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerCountUpdated, int32, CurrentCount, int32, OldCount);

