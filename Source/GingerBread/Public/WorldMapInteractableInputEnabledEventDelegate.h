#pragma once
#include "CoreMinimal.h"
#include "WorldMapInteractableInputEnabledEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorldMapInteractableInputEnabledEvent, ASackboy*, Sackboy, bool, bEnabled);

