#pragma once
#include "CoreMinimal.h"
#include "ERhythmicTransitionCannonActivationTrigger.generated.h"

UENUM(BlueprintType)
enum class ERhythmicTransitionCannonActivationTrigger : uint8 {
    Collider,
    ButtonPress,
};

