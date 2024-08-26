#pragma once
#include "CoreMinimal.h"
#include "ERegularDoorwayState.generated.h"

UENUM()
enum class ERegularDoorwayState : int32 {
    Closed,
    Open,
    SwiftOpen,
};

