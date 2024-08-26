#pragma once
#include "CoreMinimal.h"
#include "EVOEventType.generated.h"

UENUM(BlueprintType)
enum class EVOEventType : uint8 {
    HasEnteredShopWorld1,
    HasEnteredShopWorld2,
    HasEnteredShopWorld3,
    HasEnteredShopWorld4,
    HasEnteredShopWorld5,
    HasUsedPaint,
    HasPurchasedEmote,
    HasEquippedEmote,
    HasEquippedSumoSuit,
};

