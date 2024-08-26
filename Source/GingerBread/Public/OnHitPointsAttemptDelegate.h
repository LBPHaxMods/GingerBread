#pragma once
#include "CoreMinimal.h"
#include "HitPointModifyAttempt.h"
#include "OnHitPointsAttemptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHitPointsAttempt, const FHitPointModifyAttempt&, Attempt, int32, modificationDelta);

