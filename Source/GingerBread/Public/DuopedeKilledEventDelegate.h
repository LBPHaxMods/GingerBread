#pragma once
#include "CoreMinimal.h"
#include "DuopedeKilledEventDelegate.generated.h"

class ADuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDuopedeKilledEvent, ADuopedeSegment*, DuopedeRef);

