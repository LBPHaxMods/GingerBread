#pragma once
#include "CoreMinimal.h"
#include "EDLCPriceDisplayType.generated.h"

UENUM(BlueprintType)
enum class EDLCPriceDisplayType : uint8 {
    NoDiscount,
    RegularDiscount,
    PlusDiscount,
    NoDiscountWithUpsell,
    RegularAndPlusDiscount,
};

