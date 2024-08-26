#pragma once
#include "CoreMinimal.h"
#include "RollingYetiStateDelegate.generated.h"

class ARollingYeti;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRollingYetiState, ARollingYeti*, Yeti);

