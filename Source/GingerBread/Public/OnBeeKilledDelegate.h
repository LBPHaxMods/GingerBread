#pragma once
#include "CoreMinimal.h"
#include "OnBeeKilledDelegate.generated.h"

class ABoomblebee;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeeKilled, ABoomblebee*, Bee);

