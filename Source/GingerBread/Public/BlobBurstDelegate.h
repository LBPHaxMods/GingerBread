#pragma once
#include "CoreMinimal.h"
#include "BlobBurstDelegate.generated.h"

class ASackboy;
class AWobbleBlobBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlobBurst, ASackboy*, PoppingSackboy, AWobbleBlobBase*, WobbleBlobRef);

