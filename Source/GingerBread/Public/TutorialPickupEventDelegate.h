#pragma once
#include "CoreMinimal.h"
#include "ETutorialPickupType.h"
#include "TutorialPickupEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialPickupEvent, ASackboy*, Sackboy, ETutorialPickupType, PickupType);
