#pragma once
#include "CoreMinimal.h"
#include "OnStoppedRotatingDelegate.generated.h"

class AGrabWheelSwitch;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStoppedRotating, AGrabWheelSwitch*, GrabWheelRef);

