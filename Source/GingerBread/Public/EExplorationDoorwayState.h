#pragma once
#include "CoreMinimal.h"
#include "EExplorationDoorwayState.generated.h"

UENUM()
enum class EExplorationDoorwayState : int32 {
    Closed,
    Open,
    OpenFromStart,
};

