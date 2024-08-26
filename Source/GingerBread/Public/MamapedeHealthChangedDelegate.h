#pragma once
#include "CoreMinimal.h"
#include "MamapedeHealthChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMamapedeHealthChanged, float, FractionalHealthPercent);

