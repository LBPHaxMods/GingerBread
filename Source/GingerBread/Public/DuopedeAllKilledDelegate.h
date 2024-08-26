#pragma once
#include "CoreMinimal.h"
#include "DuopedeAllKilledDelegate.generated.h"

class ADuopedeSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDuopedeAllKilled, ADuopedeSpline*, SplineRef);

