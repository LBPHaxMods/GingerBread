#pragma once
#include "CoreMinimal.h"
#include "ESniperConfigVariant.generated.h"

UENUM(BlueprintType)
enum class ESniperConfigVariant : uint8 {
    Invalid,
    Base,
    Amazon,
    Undersea,
    Space,
};

