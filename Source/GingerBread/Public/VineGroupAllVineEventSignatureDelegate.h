#pragma once
#include "CoreMinimal.h"
#include "VineGroupAllVineEventSignatureDelegate.generated.h"

class ASpikeyVinesGroup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVineGroupAllVineEventSignature, ASpikeyVinesGroup*, VineGroupObj);

