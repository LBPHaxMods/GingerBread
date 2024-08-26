#pragma once
#include "CoreMinimal.h"
#include "EDecoratorType.generated.h"

UENUM(BlueprintType)
enum class EDecoratorType : uint8 {
    LengthSplineOnly,
    WidthAndLengthSpline,
};

