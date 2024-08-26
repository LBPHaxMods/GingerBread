#pragma once
#include "CoreMinimal.h"
#include "EGrabSearchResultValidity.generated.h"

UENUM(BlueprintType)
enum class EGrabSearchResultValidity : uint8 {
    None,
    Valid,
    InvalidTwist,
    InvalidReach,
    BodyObstructed,
};

