#pragma once
#include "CoreMinimal.h"
#include "WorldMapDoorwayStateEventDelegate.generated.h"

class AWorldMapDoorway;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorldMapDoorwayStateEvent, AWorldMapDoorway*, Doorway);

