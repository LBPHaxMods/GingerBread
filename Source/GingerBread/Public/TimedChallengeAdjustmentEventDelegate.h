#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeAdjustmentEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTimedChallengeAdjustmentEvent, AActor*, Adjuster, float, TimeAdjustment);

