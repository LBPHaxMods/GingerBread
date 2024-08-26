#pragma once
#include "CoreMinimal.h"
#include "FadeToBlackEventDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFadeToBlackEvent, USpawnPointComponent*, spawn_point);

