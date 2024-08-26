#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "ControlModeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlModeDelegate, EControlMode, ControlMode);

