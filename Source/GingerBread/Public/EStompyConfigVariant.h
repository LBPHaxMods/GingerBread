#pragma once
#include "CoreMinimal.h"
#include "EStompyConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EStompyConfigVariant : uint8 {
    Invalid,
    Base,
    Himalyas,
    Amazon,
    Space,
};

