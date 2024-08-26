#pragma once
#include "CoreMinimal.h"
#include "ToySwingEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FToySwingEvent, ASackboy*, Sackboy, bool, backhandSwing);

