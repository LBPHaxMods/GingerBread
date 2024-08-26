#pragma once
#include "CoreMinimal.h"
#include "LockStateChangedDelegateDelegate.generated.h"

class UTouchScreenAppBaseComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLockStateChangedDelegate, UTouchScreenAppBaseComponent*, TouchScreenBaseApp, const bool, bStateChanged);

