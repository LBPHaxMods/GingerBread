#pragma once
#include "CoreMinimal.h"
#include "RotationStartedDelegateDelegate.generated.h"

class URotatorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRotationStartedDelegate, URotatorComponent*, RotatorComponent, bool, WillOscillateForwards);

