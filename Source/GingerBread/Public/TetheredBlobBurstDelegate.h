#pragma once
#include "CoreMinimal.h"
#include "TetheredBlobBurstDelegate.generated.h"

class ASackboy;
class ATetheredWobbleBlob;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTetheredBlobBurst, ASackboy*, PoppingSackboy, ATetheredWobbleBlob*, TetheredWobbleBlobRef);

