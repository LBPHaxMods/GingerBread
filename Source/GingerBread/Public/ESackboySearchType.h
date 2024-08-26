#pragma once
#include "CoreMinimal.h"
#include "ESackboySearchType.generated.h"

UENUM(BlueprintType)
enum class ESackboySearchType : uint8 {
    NoSearching,
    StompAttack,
    CheckForWallsAhead,
    CheckForObstruction,
};

