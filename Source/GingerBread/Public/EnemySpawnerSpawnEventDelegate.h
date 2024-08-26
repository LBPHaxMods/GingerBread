#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnerSpawnEventDelegate.generated.h"

class AEnemySpawner;
class AGingerbreadAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemySpawnerSpawnEvent, AEnemySpawner*, EnemySpawner, AGingerbreadAICharacter*, SpawnedAI);

