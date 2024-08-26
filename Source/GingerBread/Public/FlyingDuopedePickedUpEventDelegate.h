#pragma once
#include "CoreMinimal.h"
#include "FlyingDuopedePickedUpEventDelegate.generated.h"

class AFlyingDuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlyingDuopedePickedUpEvent, AFlyingDuopedeSegment*, DuopedeRef);

