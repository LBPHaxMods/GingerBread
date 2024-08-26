#pragma once
#include "CoreMinimal.h"
#include "AllPlayerDiedEventDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllPlayerDiedEvent, USpawnPointComponent*, spawn_point);

