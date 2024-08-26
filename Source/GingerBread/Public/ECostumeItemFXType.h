#pragma once
#include "CoreMinimal.h"
#include "ECostumeItemFXType.generated.h"

UENUM(BlueprintType)
enum class ECostumeItemFXType : uint8 {
    CostumeItemVFX,
    CostumeItemSFX,
    Count,
};

