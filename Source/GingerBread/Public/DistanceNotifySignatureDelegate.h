#pragma once
#include "CoreMinimal.h"
#include "DistanceNotifySignatureDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDistanceNotifySignature, int32, Index, ASackboy*, Sack);

