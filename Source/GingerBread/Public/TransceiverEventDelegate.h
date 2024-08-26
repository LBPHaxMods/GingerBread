#pragma once
#include "CoreMinimal.h"
#include "TransceiverEventDelegate.generated.h"

class UGlobalEventTransceiver;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransceiverEvent, UGlobalEventTransceiver*, Source);

