#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyReleasedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyReleasedEvent, FKey, Key);

