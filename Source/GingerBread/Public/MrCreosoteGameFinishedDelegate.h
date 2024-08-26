#pragma once
#include "CoreMinimal.h"
#include "MrCreosoteGameFinishedDelegate.generated.h"

class AMrCreosote;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMrCreosoteGameFinished, AMrCreosote*, MrCreosote, bool, bSuccess, float, SuccessLevel);

