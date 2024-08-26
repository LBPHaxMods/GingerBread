#pragma once
#include "CoreMinimal.h"
#include "ToyStopSuperSlapEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FToyStopSuperSlapEvent, ASackboy*, Sackboy, bool, interrupted);

