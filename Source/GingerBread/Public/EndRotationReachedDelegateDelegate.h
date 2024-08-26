#pragma once
#include "CoreMinimal.h"
#include "EndRotationReachedDelegateDelegate.generated.h"

class URotatorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndRotationReachedDelegate, URotatorComponent*, RotatorComponent, bool, WasOscillatingForwards);

