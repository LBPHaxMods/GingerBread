#pragma once
#include "CoreMinimal.h"
#include "WobbleBlobBurstDelegate.generated.h"

class ASackboy;
class AWobbleBlob;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWobbleBlobBurst, ASackboy*, PoppingSackboy, AWobbleBlob*, WobbleBlobRef);

