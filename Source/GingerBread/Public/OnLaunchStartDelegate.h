#pragma once
#include "CoreMinimal.h"
#include "EProogleLaunchType.h"
#include "OnLaunchStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLaunchStart, EProogleLaunchType, LaunchType);

