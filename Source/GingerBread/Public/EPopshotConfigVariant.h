#pragma once
#include "CoreMinimal.h"
#include "EPopshotConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EPopshotConfigVariant : uint8 {
    Invalid,
    Base,
    Himalyas,
    Amazon,
    Undersea,
    Space,
};

