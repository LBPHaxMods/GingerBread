#pragma once
#include "CoreMinimal.h"
#include "EWidgetListNavigation.generated.h"

UENUM(BlueprintType)
namespace EWidgetListNavigation {
    enum Type {
        FixedCentre,
        BetweenRange,
        EdgeSnap,
    };
}

