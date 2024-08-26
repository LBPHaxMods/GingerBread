#pragma once
#include "CoreMinimal.h"
#include "DuopedePickedUpEventDelegate.generated.h"

class ADuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDuopedePickedUpEvent, ADuopedeSegment*, DuopedeRef);

