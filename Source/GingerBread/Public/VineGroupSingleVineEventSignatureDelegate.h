#pragma once
#include "CoreMinimal.h"
#include "VineGroupSingleVineEventSignatureDelegate.generated.h"

class ASpikeyVineSingle;
class ASpikeyVinesGroup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVineGroupSingleVineEventSignature, ASpikeyVineSingle*, VineObj, ASpikeyVinesGroup*, VineGroupObj);

