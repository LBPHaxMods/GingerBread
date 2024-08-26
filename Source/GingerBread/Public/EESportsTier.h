#pragma once
#include "CoreMinimal.h"
#include "EESportsTier.generated.h"

UENUM(BlueprintType)
enum class EESportsTier : uint8 {
    Bronze,
    Silver,
    Gold,
    Platinum,
    Diamond,
    Count,
};

