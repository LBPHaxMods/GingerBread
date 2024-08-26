#pragma once
#include "CoreMinimal.h"
#include "BossDoorwayStateEventDelegate.generated.h"

class ABossDoorway;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossDoorwayStateEvent, ABossDoorway*, BossDoorway);

