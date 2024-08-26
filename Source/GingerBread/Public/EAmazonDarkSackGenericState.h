#pragma once
#include "CoreMinimal.h"
#include "EAmazonDarkSackGenericState.generated.h"

UENUM(BlueprintType)
enum class EAmazonDarkSackGenericState : uint8 {
    Invalid,
    Idle,
    Fight,
    Celebrating,
    Dead,
    NumStates,
};

