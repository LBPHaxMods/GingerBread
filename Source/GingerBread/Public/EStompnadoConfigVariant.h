#pragma once
#include "CoreMinimal.h"
#include "EStompnadoConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EStompnadoConfigVariant : uint8 {
    Invalid,
    Base,
    Space,
};

