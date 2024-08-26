#pragma once
#include "CoreMinimal.h"
#include "EPrizeBubbleMovementType.generated.h"

UENUM(BlueprintType)
enum class EPrizeBubbleMovementType : uint8 {
    Static,
    Physics,
    Glued,
};

