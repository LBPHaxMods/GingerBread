#pragma once
#include "CoreMinimal.h"
#include "EFroogleConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EFroogleConfigVariant : uint8 {
    Invalid,
    Base,
    Himalyas,
    Amazon,
    Undersea,
    Space,
    Miniboss,
};

