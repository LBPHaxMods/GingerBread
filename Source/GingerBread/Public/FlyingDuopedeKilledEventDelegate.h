#pragma once
#include "CoreMinimal.h"
#include "FlyingDuopedeKilledEventDelegate.generated.h"

class AFlyingDuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlyingDuopedeKilledEvent, AFlyingDuopedeSegment*, DuopedeRef);

