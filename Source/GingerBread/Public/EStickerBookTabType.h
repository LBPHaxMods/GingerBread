#pragma once
#include "CoreMinimal.h"
#include "EStickerBookTabType.generated.h"

UENUM(BlueprintType)
enum class EStickerBookTabType : uint8 {
    Worlds,
    Void,
    Costumes,
    Count,
    Invalid,
};

