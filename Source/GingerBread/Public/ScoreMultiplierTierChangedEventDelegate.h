#pragma once
#include "CoreMinimal.h"
#include "ScoreMultiplierTierChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScoreMultiplierTierChangedEvent, int32, tier, float, multiplier);

