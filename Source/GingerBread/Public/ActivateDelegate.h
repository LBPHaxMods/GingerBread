#pragma once
#include "CoreMinimal.h"
#include "ActivateDelegate.generated.h"

class ATiltPlatform;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivate, ATiltPlatform*, TiltPlatform);

