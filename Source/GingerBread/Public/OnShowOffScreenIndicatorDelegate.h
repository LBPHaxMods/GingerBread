#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnShowOffScreenIndicatorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShowOffScreenIndicator, bool, onOff, FVector, WorldPosition);

