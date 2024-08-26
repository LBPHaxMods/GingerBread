#pragma once
#include "CoreMinimal.h"
#include "EUIScoreShowType.generated.h"

UENUM(BlueprintType)
enum class EUIScoreShowType : uint8 {
    Instant,
    WalletCountup,
    OutOfLevel,
    DoubleOrNothingPin,
    SingleBell,
};

