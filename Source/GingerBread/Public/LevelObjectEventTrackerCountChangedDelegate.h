#pragma once
#include "CoreMinimal.h"
#include "LevelObjectEventTrackerCountChangedDelegate.generated.h"

class ALevelObjectEventTracker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelObjectEventTrackerCountChanged, ALevelObjectEventTracker*, EventTracker, int32, EventsRemaining);

