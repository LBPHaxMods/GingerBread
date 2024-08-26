#pragma once
#include "CoreMinimal.h"
#include "NotificationResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FNotificationResult, int32, Result);

