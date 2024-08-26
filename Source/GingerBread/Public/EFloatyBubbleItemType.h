#pragma once
#include "CoreMinimal.h"
#include "EFloatyBubbleItemType.generated.h"

UENUM(BlueprintType)
enum class EFloatyBubbleItemType : uint8 {
    None,
    Sackboy,
    Enemy,
    Object,
    Collectable,
};

