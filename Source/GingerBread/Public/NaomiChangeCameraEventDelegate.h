#pragma once
#include "CoreMinimal.h"
#include "NaomiChangeCameraEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNaomiChangeCameraEvent, bool, IsAdminModeCam);

