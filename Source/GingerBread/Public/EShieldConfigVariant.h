#pragma once
#include "CoreMinimal.h"
#include "EShieldConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EShieldConfigVariant : uint8 {
    Invalid,
    Base,
    Amazon,
    Undersea,
    Space,
};

