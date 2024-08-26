#pragma once
#include "CoreMinimal.h"
#include "OnRotatingDelegate.generated.h"

class AGrabWheelSwitch;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRotating, float, AngularVelocity, AGrabWheelSwitch*, GrabWheelRef);

