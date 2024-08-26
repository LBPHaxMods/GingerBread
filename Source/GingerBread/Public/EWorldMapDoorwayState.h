#pragma once
#include "CoreMinimal.h"
#include "EWorldMapDoorwayState.generated.h"

UENUM()
enum class EWorldMapDoorwayState : int32 {
    Closed,
    Open,
    SwiftOpen,
};

