#pragma once
#include "CoreMinimal.h"
#include "TrapTriggeredDelegate.generated.h"

class ACrumpler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapTriggered, ACrumpler*, Crumpler);

