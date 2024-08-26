#pragma once
#include "CoreMinimal.h"
#include "OnVexConveyorStompDelegate.generated.h"

class AMoverTool2;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVexConveyorStomp, bool, WasForwardMove, AMoverTool2*, ChangedMover);

