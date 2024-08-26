#pragma once
#include "CoreMinimal.h"
#include "DistanceDisableNotifyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDistanceDisableNotify, bool, Active);

