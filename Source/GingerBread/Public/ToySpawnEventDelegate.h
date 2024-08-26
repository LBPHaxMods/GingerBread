#pragma once
#include "CoreMinimal.h"
#include "ToySpawnEventDelegate.generated.h"

class AActor;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FToySpawnEvent, ASackboy*, Sackboy, AActor*, SpawnedActor);

