#pragma once
#include "CoreMinimal.h"
#include "RetryAtMidPointDelegateDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRetryAtMidPointDelegate, USpawnPointComponent*, SpawnPoint);

