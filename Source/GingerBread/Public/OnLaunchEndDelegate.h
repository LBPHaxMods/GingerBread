#pragma once
#include "CoreMinimal.h"
#include "EProogleLaunchType.h"
#include "OnLaunchEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLaunchEnd, EProogleLaunchType, LaunchType);

