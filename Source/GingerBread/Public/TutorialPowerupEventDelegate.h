#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "TutorialPowerupEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialPowerupEvent, EControlMode, ControlMode);

