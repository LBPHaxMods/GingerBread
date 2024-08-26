#pragma once
#include "CoreMinimal.h"
#include "ETrophy.generated.h"

UENUM(BlueprintType)
namespace ETrophy {
    enum Type {
        DefaultZero,
        None,
        Bronze,
        Silver = 4,
        Gold = 8,
        Max = 16,
    };
}

