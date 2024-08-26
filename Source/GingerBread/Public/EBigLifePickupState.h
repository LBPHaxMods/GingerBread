#pragma once
#include "CoreMinimal.h"
#include "EBigLifePickupState.generated.h"

UENUM(BlueprintType)
enum class EBigLifePickupState : uint8 {
    Spawned,
    Launching,
    Fallen,
    CollectToSackboy,
};

