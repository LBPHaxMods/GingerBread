#pragma once
#include "CoreMinimal.h"
#include "NaomiScreenHitEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNaomiScreenHitEvent, int32, ScreenNumber);

