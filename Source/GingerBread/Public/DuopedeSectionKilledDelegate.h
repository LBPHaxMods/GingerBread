#pragma once
#include "CoreMinimal.h"
#include "DuopedeSectionKilledDelegate.generated.h"

class ADuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDuopedeSectionKilled, ADuopedeSegment*, DuopedeRef);

