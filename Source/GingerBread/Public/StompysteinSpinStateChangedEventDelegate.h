#pragma once
#include "CoreMinimal.h"
#include "EStompysteinSpinAOEState.h"
#include "StompysteinSpinStateChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStompysteinSpinStateChangedEvent, EStompysteinSpinAOEState, NewState);

