#pragma once
#include "CoreMinimal.h"
#include "VirtualControllerActionFinishedEventDelegate.generated.h"

class UAutomatedVirtualController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FVirtualControllerActionFinishedEvent, UAutomatedVirtualController*, BaseVirtualController, int32, PlayerId);

