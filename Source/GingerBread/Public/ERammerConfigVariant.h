#pragma once
#include "CoreMinimal.h"
#include "ERammerConfigVariant.generated.h"

UENUM(BlueprintType)
enum class ERammerConfigVariant : uint8 {
    Invalid,
    Base,
    Himalayas,
    Amazon,
    Undersea,
    Space,
};

