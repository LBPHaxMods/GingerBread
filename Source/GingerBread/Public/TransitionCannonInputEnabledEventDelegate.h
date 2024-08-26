#pragma once
#include "CoreMinimal.h"
#include "TransitionCannonInputEnabledEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTransitionCannonInputEnabledEvent, ASackboy*, Sackboy, bool, bEnabled);

