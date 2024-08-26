#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionFinishedEventDelegate.generated.h"

class UCameraBehaviour;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraTransitionFinishedEvent, UCameraBehaviour*, Behaviour);

