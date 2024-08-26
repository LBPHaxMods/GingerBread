#pragma once
#include "CoreMinimal.h"
#include "AxisActionEventDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAxisActionEvent, AGingerbreadPlayerController*, PlayerController, float, AxisValue);

