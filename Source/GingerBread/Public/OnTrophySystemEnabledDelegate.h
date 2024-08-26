#pragma once
#include "CoreMinimal.h"
#include "OnTrophySystemEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrophySystemEnabled, bool, TrophySystemEnabled);

