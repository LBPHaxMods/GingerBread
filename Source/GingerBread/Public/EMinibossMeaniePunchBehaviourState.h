#pragma once
#include "CoreMinimal.h"
#include "EMinibossMeaniePunchBehaviourState.generated.h"

UENUM(BlueprintType)
enum class EMinibossMeaniePunchBehaviourState : uint8 {
    SearchingForTarget,
    TrackTarget,
    Attacking,
    Recovering,
};

