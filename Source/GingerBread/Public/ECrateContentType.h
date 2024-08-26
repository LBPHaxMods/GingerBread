#pragma once
#include "CoreMinimal.h"
#include "ECrateContentType.generated.h"

UENUM(BlueprintType)
enum class ECrateContentType : uint8 {
    ScoreBubbles,
    PrizeBubble,
    CollectabellsSmall,
    CollectabellsLarge,
    SingleLife,
    BigLife,
    Empty,
};

