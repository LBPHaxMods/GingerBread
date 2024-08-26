#pragma once
#include "CoreMinimal.h"
#include "SplineTargedReachedDelegateDelegate.generated.h"

class USplineFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSplineTargedReachedDelegate, USplineFollowerComponent*, SplineFollower, bool, WasTravellingForward, bool, WasSuccess);

