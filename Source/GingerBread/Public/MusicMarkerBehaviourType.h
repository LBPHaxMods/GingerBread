#pragma once
#include "CoreMinimal.h"
#include "MusicMarkerBehaviourType.generated.h"

UENUM()
enum class MusicMarkerBehaviourType : int32 {
    HandleAsBeat,
    HandleAsBar,
};

