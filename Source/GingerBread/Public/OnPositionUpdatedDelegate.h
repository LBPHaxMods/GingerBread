#pragma once
#include "CoreMinimal.h"
#include "OnPositionUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPositionUpdated, float, percentage);

