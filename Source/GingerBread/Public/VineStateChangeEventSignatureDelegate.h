#pragma once
#include "CoreMinimal.h"
#include "ESpikeyVineInternalState.h"
#include "VineStateChangeEventSignatureDelegate.generated.h"

class ASpikeyVineSingle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVineStateChangeEventSignature, ASpikeyVineSingle*, VineObj, ESpikeyVineInternalState, OldState, ESpikeyVineInternalState, NewState);

