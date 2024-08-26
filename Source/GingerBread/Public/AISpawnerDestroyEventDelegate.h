#pragma once
#include "CoreMinimal.h"
#include "AISpawnerDestroyEventDelegate.generated.h"

class AAISpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISpawnerDestroyEvent, AAISpawner*, Spawner);

