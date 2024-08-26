#pragma once
#include "CoreMinimal.h"
#include "ObjectResetEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectResetEvent, int32, ResetNumber);

