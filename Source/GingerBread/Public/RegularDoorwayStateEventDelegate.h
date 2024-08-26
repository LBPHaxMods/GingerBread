#pragma once
#include "CoreMinimal.h"
#include "RegularDoorwayStateEventDelegate.generated.h"

class ARegularDoorway;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegularDoorwayStateEvent, ARegularDoorway*, Doorway);

