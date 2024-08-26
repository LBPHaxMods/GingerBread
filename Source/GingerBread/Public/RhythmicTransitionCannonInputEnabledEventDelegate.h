#pragma once
#include "CoreMinimal.h"
#include "RhythmicTransitionCannonInputEnabledEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRhythmicTransitionCannonInputEnabledEvent, ASackboy*, Sackboy, bool, bEnabled);

