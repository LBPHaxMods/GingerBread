#pragma once
#include "CoreMinimal.h"
#include "SplinePointReachedDelegateDelegate.generated.h"

class USplineFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSplinePointReachedDelegate, USplineFollowerComponent*, SplineFollower, bool, WasTravellingForward, int32, SplinePointIndex);

