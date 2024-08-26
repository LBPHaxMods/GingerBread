#pragma once
#include "CoreMinimal.h"
#include "SplineMovementPausedDelegateDelegate.generated.h"

class USplineFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineMovementPausedDelegate, USplineFollowerComponent*, SplineFollower, bool, WasTravellingForward);

