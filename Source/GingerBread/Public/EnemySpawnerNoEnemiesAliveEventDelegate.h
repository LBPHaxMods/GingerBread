#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnerNoEnemiesAliveEventDelegate.generated.h"

class AEnemySpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnerNoEnemiesAliveEvent, AEnemySpawner*, EnemySpawner);

