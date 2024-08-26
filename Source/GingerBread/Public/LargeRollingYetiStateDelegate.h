#pragma once
#include "CoreMinimal.h"
#include "LargeRollingYetiStateDelegate.generated.h"

class ALargeRollingYeti;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLargeRollingYetiState, ALargeRollingYeti*, Yeti);

