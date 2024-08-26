#pragma once
#include "CoreMinimal.h"
#include "LevelResetPlayerEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelResetPlayerEvent, ASackboy*, Sackboy);

