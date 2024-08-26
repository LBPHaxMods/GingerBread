#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionStartedEventDelegate.generated.h"

class UCameraBehaviour;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraTransitionStartedEvent, UCameraBehaviour*, Behaviour);

