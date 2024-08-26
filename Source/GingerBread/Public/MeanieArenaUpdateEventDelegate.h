#pragma once
#include "CoreMinimal.h"
#include "MeanieArenaUpdateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMeanieArenaUpdateEvent, float, InnerRingRotationSpeed, float, OuterRingRotationSpeed, float, InnerRingHeightDelta, float, OuterRingHeightDelta);

