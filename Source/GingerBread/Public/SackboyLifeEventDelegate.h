#pragma once
#include "CoreMinimal.h"
#include "SackboyLifeEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyLifeEvent, ASackboy*, Sackboy);

