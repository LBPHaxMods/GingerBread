#pragma once
#include "CoreMinimal.h"
#include "ToySackboyEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToySackboyEvent, ASackboy*, Sackboy);

