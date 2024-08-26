#pragma once
#include "CoreMinimal.h"
#include "TetheredBlobPickedUpDelegate.generated.h"

class ATetheredWobbleBlob;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetheredBlobPickedUp, ATetheredWobbleBlob*, TetheredWobbleBlobRef);

