#pragma once
#include "CoreMinimal.h"
#include "NaomiHandStartedChargingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNaomiHandStartedCharging, float, ChargeDuration, bool, IsLeftHand);

