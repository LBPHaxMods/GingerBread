#pragma once
#include "CoreMinimal.h"
#include "RideOnPathEventDelegate.generated.h"

class URideOnPathFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRideOnPathEvent, URideOnPathFollowerComponent*, Follower);

