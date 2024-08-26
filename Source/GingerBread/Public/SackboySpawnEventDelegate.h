#pragma once
#include "CoreMinimal.h"
#include "ESackboySpawnType.h"
#include "SackboySpawnEventDelegate.generated.h"

class ASackboy;
class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSackboySpawnEvent, ASackboy*, Sackboy, TEnumAsByte<ESackboySpawnType>, SpawnType, USpawnPointComponent*, spawn_point);

