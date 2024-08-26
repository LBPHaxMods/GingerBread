#pragma once
#include "CoreMinimal.h"
#include "LockStateChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLockStateChangedEvent, const bool, bLocked, const bool, bImmediate);

