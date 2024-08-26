#pragma once
#include "CoreMinimal.h"
#include "SplineMovementStartedDelegateDelegate.generated.h"

class USplineFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineMovementStartedDelegate, USplineFollowerComponent*, SplineFollower, bool, WillTravelForward);

