#pragma once
#include "CoreMinimal.h"
#include "IsFullyDownDelegate.generated.h"

class ASpikeyVineSingleStandaloneMamapede;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIsFullyDown, ASpikeyVineSingleStandaloneMamapede*, SpikeyVine);

