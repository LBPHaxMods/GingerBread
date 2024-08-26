#pragma once
#include "CoreMinimal.h"
#include "SpawnPointEventDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnPointEvent, USpawnPointComponent*, SpawnPoint);

