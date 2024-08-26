#pragma once
#include "CoreMinimal.h"
#include "SplineEndPositionReachedDelegateDelegate.generated.h"

class USplineFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineEndPositionReachedDelegate, USplineFollowerComponent*, SplineFollower, bool, WasTravellingForward);

