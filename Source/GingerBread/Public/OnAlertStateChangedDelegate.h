#pragma once
#include "CoreMinimal.h"
#include "EAlertState.h"
#include "OnAlertStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAlertStateChanged, EAlertState, oldAlertState, EAlertState, newAlertState);

