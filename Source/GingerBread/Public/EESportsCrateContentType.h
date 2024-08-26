#pragma once
#include "CoreMinimal.h"
#include "EESportsCrateContentType.generated.h"

UENUM(BlueprintType)
enum class EESportsCrateContentType : uint8 {
    ScoreBubbles,
    PrizeBubble,
    CollectabellsSmall,
    CollectabellsLarge,
    SingleLife,
    BigLife,
    Empty,
};

