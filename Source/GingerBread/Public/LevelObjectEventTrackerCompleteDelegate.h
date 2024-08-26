#pragma once
#include "CoreMinimal.h"
#include "LevelObjectEventTrackerCompleteDelegate.generated.h"

class ALevelObjectEventTracker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelObjectEventTrackerComplete, ALevelObjectEventTracker*, EventTracker);

