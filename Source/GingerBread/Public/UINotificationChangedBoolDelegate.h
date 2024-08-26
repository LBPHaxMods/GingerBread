#pragma once
#include "CoreMinimal.h"
#include "UINotificationChangedBoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUINotificationChangedBool, bool, NewState);

