#pragma once
#include "CoreMinimal.h"
#include "HitPointModifyResult.h"
#include "StompySpinDamageAppliedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStompySpinDamageAppliedSignature, const FHitPointModifyResult&, HitResult);

