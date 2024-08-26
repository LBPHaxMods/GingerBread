#pragma once
#include "CoreMinimal.h"
#include "PodInputEnabledEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPodInputEnabledEvent, ASackboy*, Sackboy, bool, bEnabled);

