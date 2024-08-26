#pragma once
#include "CoreMinimal.h"
#include "InfiniteLivesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInfiniteLivesChanged, bool, InfiniteLives);

