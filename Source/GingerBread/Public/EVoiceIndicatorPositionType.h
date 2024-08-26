#pragma once
#include "CoreMinimal.h"
#include "EVoiceIndicatorPositionType.generated.h"

UENUM(BlueprintType)
enum class EVoiceIndicatorPositionType : uint8 {
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
    TopLeftCorner,
    TopRightCorner,
    CostumeShop3PlusPlayers,
};

