#pragma once
#include "CoreMinimal.h"
#include "AxisActionDelegateDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAxisActionDelegate, AGingerbreadPlayerController*, PlayerController, float, AxisValue);

