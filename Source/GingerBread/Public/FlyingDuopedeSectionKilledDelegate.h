#pragma once
#include "CoreMinimal.h"
#include "FlyingDuopedeSectionKilledDelegate.generated.h"

class AFlyingDuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlyingDuopedeSectionKilled, AFlyingDuopedeSegment*, DuopedeRef);

