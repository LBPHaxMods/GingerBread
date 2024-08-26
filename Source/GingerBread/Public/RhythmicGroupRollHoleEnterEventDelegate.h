#pragma once
#include "CoreMinimal.h"
#include "RhythmicGroupRollHoleEnterEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmicGroupRollHoleEnterEvent, int32, splineIndex);

