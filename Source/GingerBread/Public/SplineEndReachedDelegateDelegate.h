#pragma once
#include "CoreMinimal.h"
#include "SplineEndReachedDelegateDelegate.generated.h"

class USplineFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineEndReachedDelegate, USplineFollowerComponent*, SplineFollower, bool, WasTravellingForward);

