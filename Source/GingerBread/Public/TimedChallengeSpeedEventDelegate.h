#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeSpeedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedChallengeSpeedEvent, float, TimerSpeed);

