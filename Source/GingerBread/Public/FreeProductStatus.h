#pragma once
#include "CoreMinimal.h"
#include "FreeProductStatus.generated.h"

UENUM(BlueprintType)
enum class FreeProductStatus : uint8 {
    New,
    Seen,
};

