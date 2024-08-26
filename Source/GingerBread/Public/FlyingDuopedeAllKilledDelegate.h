#pragma once
#include "CoreMinimal.h"
#include "FlyingDuopedeAllKilledDelegate.generated.h"

class AFlyingDuopedeSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlyingDuopedeAllKilled, AFlyingDuopedeSpline*, SplineRef);

