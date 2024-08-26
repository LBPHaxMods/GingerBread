#pragma once
#include "CoreMinimal.h"
#include "VexConveyorSpeedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexConveyorSpeedChanged, float, NewSpeed);

