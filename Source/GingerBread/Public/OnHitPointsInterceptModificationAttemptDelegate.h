#pragma once
#include "CoreMinimal.h"
#include "HitPointModifyResult.h"
#include "OnHitPointsInterceptModificationAttemptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitPointsInterceptModificationAttempt, FHitPointModifyResult&, Result);

