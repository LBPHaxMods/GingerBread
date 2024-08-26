#pragma once
#include "CoreMinimal.h"
#include "HitPointModifyResult.h"
#include "OnHitPointsPostModificationAttemptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitPointsPostModificationAttempt, const FHitPointModifyResult&, Result);

