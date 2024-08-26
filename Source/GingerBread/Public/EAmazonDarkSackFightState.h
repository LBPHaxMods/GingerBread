#pragma once
#include "CoreMinimal.h"
#include "EAmazonDarkSackFightState.generated.h"

UENUM(BlueprintType)
enum class EAmazonDarkSackFightState : uint8 {
    Invalid,
    Alert,
    Approach,
    Poke,
    Throw,
};

