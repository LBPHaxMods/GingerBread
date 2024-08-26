#pragma once
#include "CoreMinimal.h"
#include "EThumbnailType.generated.h"

UENUM(BlueprintType)
enum class EThumbnailType : uint8 {
    ThumbnailBorderlessRegular,
    ThumbnailBorderlessLarge,
    ThumbnailBorderedSmall,
    ThumbnailBorderedRegular,
    Count,
};

