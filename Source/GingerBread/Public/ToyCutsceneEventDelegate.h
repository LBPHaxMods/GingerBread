#pragma once
#include "CoreMinimal.h"
#include "ToyCutsceneEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToyCutsceneEvent, ASackboy*, Sackboy);

