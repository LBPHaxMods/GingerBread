#pragma once
#include "CoreMinimal.h"
#include "ArtMoverClipPlayCallbackSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArtMoverClipPlayCallbackSignature, int32, ClipIndex, int32, TargetIndex);

