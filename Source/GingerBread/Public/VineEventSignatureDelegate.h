#pragma once
#include "CoreMinimal.h"
#include "VineEventSignatureDelegate.generated.h"

class ASpikeyVineSingle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVineEventSignature, ASpikeyVineSingle*, VineObj);

