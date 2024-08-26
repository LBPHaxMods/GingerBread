#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeAdjustmentEvent_ForwardedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FTimedChallengeAdjustmentEvent_Forwarded, AActor*, Adjuster, float, TimeAdjustment);

