#pragma once
#include "CoreMinimal.h"
#include "EMeanieConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EMeanieConfigVariant : uint8 {
    Invalid,
    Base,
    Undersea,
    Space,
};

