#pragma once
#include "CoreMinimal.h"
#include "EUIBasicActions.generated.h"

UENUM(BlueprintType)
namespace EUIBasicActions {
    enum Type {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        SELECT,
        BACK,
        PREVIOUS,
        NEXT,
        PREVIOUS_PAGE,
        NEXT_PAGE,
        PRIMARY_MISC,
        SECONDARY_MISC,
        ACTION_TYPE_COUNT,
    };
}

