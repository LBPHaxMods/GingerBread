#pragma once
#include "CoreMinimal.h"
#include "EAmazonDarkSackIdleState.generated.h"

UENUM(BlueprintType)
enum class EAmazonDarkSackIdleState : uint8 {
    Invalid,
    Stopped,
    Dancing,
    NumStates,
};

