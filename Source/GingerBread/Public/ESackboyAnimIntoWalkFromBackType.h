#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIntoWalkFromBackType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIntoWalkFromBackType : uint8 {
    FromBackForwards,
    FromBackLeft,
    FromBackRight,
    FromBackBackwards,
};

