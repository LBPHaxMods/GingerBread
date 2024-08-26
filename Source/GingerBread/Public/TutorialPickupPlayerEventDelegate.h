#pragma once
#include "CoreMinimal.h"
#include "TutorialPickupPlayerEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialPickupPlayerEvent, ASackboy*, Sackboy, ASackboy*, PickedUpSackboy);

