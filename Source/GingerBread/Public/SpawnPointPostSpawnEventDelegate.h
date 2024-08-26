#pragma once
#include "CoreMinimal.h"
#include "SpawnPointPostSpawnEventDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointPostSpawnEvent, USpawnPointComponent*, SpawnPoint, bool, first_time);

