#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnerFinalSpawnEventDelegate.generated.h"

class AEnemySpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnerFinalSpawnEvent, AEnemySpawner*, EnemySpawner);

