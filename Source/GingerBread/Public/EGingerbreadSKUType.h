#pragma once
#include "CoreMinimal.h"
#include "EGingerbreadSKUType.generated.h"

UENUM(BlueprintType)
enum class EGingerbreadSKUType : uint8 {
    INVALID,
    PS4_EU1,
    PS4_EU2,
    PS4_US,
    PS4_JP,
    PS4_ASIA,
    PS4_CHINA,
    PS5_EU,
    PS5_US,
    PS5_JP,
    PS5_ASIA,
    PS5_CHINA,
    PC_GLOBAL,
};

