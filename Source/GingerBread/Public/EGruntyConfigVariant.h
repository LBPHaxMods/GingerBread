#pragma once
#include "CoreMinimal.h"
#include "EGruntyConfigVariant.generated.h"

UENUM(BlueprintType)
enum class EGruntyConfigVariant : uint8 {
    Invalid,
    Base,
    Himalayas,
    Amazon,
    Undersea,
    Space,
};

