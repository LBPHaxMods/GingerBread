#pragma once
#include "CoreMinimal.h"
#include "MeanieSpinUpdateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMeanieSpinUpdateEvent, float, InnerRingRotationSpeed, float, OuterRingRotationSpeed, float, InnerRingHeightDelta, float, OuterRingHeightDelta);

