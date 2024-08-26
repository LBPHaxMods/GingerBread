#pragma once
#include "CoreMinimal.h"
#include "EPhaseBombTimelinePlayDirection.generated.h"

UENUM()
enum class EPhaseBombTimelinePlayDirection : int32 {
    Stopped,
    Forwards,
    Backwards,
};

