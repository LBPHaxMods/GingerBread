#pragma once
#include "CoreMinimal.h"
#include "DeactivateDelegate.generated.h"

class ATiltPlatform;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeactivate, ATiltPlatform*, TiltPlatform);

