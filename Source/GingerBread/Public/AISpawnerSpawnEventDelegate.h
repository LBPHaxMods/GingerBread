#pragma once
#include "CoreMinimal.h"
#include "AISpawnerSpawnEventDelegate.generated.h"

class AAISpawner;
class AGingerbreadAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAISpawnerSpawnEvent, AAISpawner*, Spawner, const TArray<AGingerbreadAICharacter*>&, AIs);

