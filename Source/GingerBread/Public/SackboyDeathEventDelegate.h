#pragma once
#include "CoreMinimal.h"
#include "SackboyDeathEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyDeathEvent, ASackboy*, Sackboy);

