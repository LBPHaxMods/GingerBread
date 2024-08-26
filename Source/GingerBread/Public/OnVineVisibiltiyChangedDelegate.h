#pragma once
#include "CoreMinimal.h"
#include "OnVineVisibiltiyChangedDelegate.generated.h"

class ASpikeyVineSingleStandaloneMamapede;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVineVisibiltiyChanged, ASpikeyVineSingleStandaloneMamapede*, SpikeyVine, bool, NewVisibility);

