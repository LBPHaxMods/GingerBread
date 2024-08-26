#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeMovementModeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMamapedeMovementModeDelegate, EMamapedeMovementMode, MovementMode);

