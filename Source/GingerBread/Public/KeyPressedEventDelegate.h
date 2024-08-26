#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyPressedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyPressedEvent, FKey, Key);

