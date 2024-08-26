#pragma once
#include "CoreMinimal.h"
#include "EPickupCollectionResult.generated.h"

UENUM(BlueprintType)
enum EPickupCollectionResult {
    Consumed,
    Rejected,
    Ignored,
};

