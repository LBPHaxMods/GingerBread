#pragma once
#include "CoreMinimal.h"
#include "EVexConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EVexConfigVariant : uint8 {
    Invalid,
    Base,
    Himalayas,
    Undersea,
    Journey,
};

