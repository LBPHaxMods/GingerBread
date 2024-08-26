#pragma once
#include "CoreMinimal.h"
#include "OnCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCountChanged, int32, Count);

