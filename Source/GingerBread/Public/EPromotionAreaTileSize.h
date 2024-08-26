#pragma once
#include "CoreMinimal.h"
#include "EPromotionAreaTileSize.generated.h"

UENUM(BlueprintType)
enum class EPromotionAreaTileSize : uint8 {
    Small,
    Large,
    Either,
};

