#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeFinishEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedChallengeFinishEvent, bool, bIsPendingReset);

