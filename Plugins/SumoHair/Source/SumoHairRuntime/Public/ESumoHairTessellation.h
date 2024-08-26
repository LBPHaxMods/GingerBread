#pragma once
#include "CoreMinimal.h"
#include "ESumoHairTessellation.generated.h"

UENUM()
enum class ESumoHairTessellation : uint32 {
    NoTessellation = 1,
    Tessellation2x,
    Tessellation4x = 4,
    Tessellation8x = 8,
    Tessellation16x = 16,
};

