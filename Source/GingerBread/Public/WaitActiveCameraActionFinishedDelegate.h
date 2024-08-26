#pragma once
#include "CoreMinimal.h"
#include "WaitActiveCameraActionFinishedDelegate.generated.h"

class ASingleScreenCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitActiveCameraActionFinished, ASingleScreenCamera*, ActiveCamera);

