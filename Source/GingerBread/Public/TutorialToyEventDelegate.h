#pragma once
#include "CoreMinimal.h"
#include "TutorialToyEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialToyEvent, ASackboy*, Sackboy, bool, isVehicle);

