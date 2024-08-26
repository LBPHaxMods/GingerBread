#pragma once
#include "CoreMinimal.h"
#include "SpawnPointResetLevelEventDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointResetLevelEvent, USpawnPointComponent*, SpawnPoint, bool, first_time);

