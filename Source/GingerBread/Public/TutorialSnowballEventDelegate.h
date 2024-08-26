#pragma once
#include "CoreMinimal.h"
#include "TutorialSnowballEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialSnowballEvent, ASackboy*, Sackboy, bool, isVehicle);

