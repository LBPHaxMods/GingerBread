#pragma once
#include "CoreMinimal.h"
#include "ECostumeItemVisualSize.generated.h"

UENUM(BlueprintType)
enum class ECostumeItemVisualSize : uint8 {
    VisualSize_Small,
    VisualSize_Medium,
    VisualSize_Large,
    Count,
};

