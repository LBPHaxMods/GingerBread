#pragma once
#include "CoreMinimal.h"
#include "GrabKnotPulledDelegate.generated.h"

class AMultiGrabKnot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabKnotPulled, AMultiGrabKnot*, MultiGrabKnot);

