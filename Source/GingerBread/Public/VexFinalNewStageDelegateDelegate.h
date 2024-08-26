#pragma once
#include "CoreMinimal.h"
#include "VexFinalNewStageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalNewStageDelegate, int32, StageNumber);

