#pragma once
#include "CoreMinimal.h"
#include "DoorwayEventDelegate.generated.h"

class ADoorwayBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDoorwayEvent, ADoorwayBase*, OriginDoorway, ADoorwayBase*, DestinationDoorway);

