#pragma once
#include "CoreMinimal.h"
#include "RhythmicGroupRollHoleExitEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmicGroupRollHoleExitEvent, int32, splineIndex);

