#pragma once
#include "CoreMinimal.h"
#include "EFloatyBubbleQuantizeMode.generated.h"

UENUM(BlueprintType)
enum class EFloatyBubbleQuantizeMode : uint8 {
    None,
    Normal,
    FavourRightAxis,
    FavourForwardAxis,
    Bubble2D,
};

