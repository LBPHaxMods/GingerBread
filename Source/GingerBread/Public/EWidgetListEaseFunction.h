#pragma once
#include "CoreMinimal.h"
#include "EWidgetListEaseFunction.generated.h"

UENUM(BlueprintType)
namespace EWidgetListEaseFunction {
    enum Type {
        Linear,
        QuadIn,
        QuadOut,
        QuadInOut,
        CubicIn,
        CubicOut,
        CubicInOut,
    };
}

