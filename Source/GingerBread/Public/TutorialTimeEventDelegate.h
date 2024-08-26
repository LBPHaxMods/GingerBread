#pragma once
#include "CoreMinimal.h"
#include "TutorialTimeEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialTimeEvent, ASackboy*, Sackboy, float, Duration);

