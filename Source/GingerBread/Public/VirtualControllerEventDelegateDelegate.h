#pragma once
#include "CoreMinimal.h"
#include "VirtualControllerEventDelegateDelegate.generated.h"

class UAutomatedVirtualController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVirtualControllerEventDelegate, UAutomatedVirtualController*, BaseVirtualController, int32, PlayerId);

