#pragma once
#include "CoreMinimal.h"
#include "OnControllerConnectionChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnControllerConnectionChangedEvent, bool, bIsConnected, int32, SomeValue, int32, ControllerIndex);

