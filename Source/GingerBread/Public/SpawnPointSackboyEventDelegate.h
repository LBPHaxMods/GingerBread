#pragma once
#include "CoreMinimal.h"
#include "SpawnPointSackboyEventDelegate.generated.h"

class ASackboy;
class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointSackboyEvent, USpawnPointComponent*, SpawnPoint, ASackboy*, Sackboy);

