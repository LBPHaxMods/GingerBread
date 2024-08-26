#pragma once
#include "CoreMinimal.h"
#include "LevelObjectEventTrackerProgressToEventDelegate.generated.h"

class ALevelObjectEventTracker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelObjectEventTrackerProgressToEvent, ALevelObjectEventTracker*, EventTracker);

