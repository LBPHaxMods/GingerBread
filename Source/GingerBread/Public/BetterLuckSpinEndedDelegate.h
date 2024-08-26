#pragma once
#include "CoreMinimal.h"
#include "BetterLuckSpinEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBetterLuckSpinEnded, int32, CurrentStage);

