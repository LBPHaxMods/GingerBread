#pragma once
#include "CoreMinimal.h"
#include "ESackboyMaterialSlot.generated.h"

UENUM(BlueprintType)
enum class ESackboyMaterialSlot : uint8 {
    MainBody,
    Tongue,
    Eyes,
    Fuzz,
    Hair,
    Count,
};

