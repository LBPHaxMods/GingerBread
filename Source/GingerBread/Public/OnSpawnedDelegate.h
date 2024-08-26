#pragma once
#include "CoreMinimal.h"
#include "OnSpawnedDelegate.generated.h"

class AActor;
class AAdvancedEmitter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpawned, AActor*, SpawnedActor, AAdvancedEmitter*, Emitter);

