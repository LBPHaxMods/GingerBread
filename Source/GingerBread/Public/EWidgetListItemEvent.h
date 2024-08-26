#pragma once
#include "CoreMinimal.h"
#include "EWidgetListItemEvent.generated.h"

UENUM(BlueprintType)
namespace EWidgetListItemEvent {
    enum Type {
        Highlight,
        Unhighlight,
        Select,
        Deselect,
        LoopHighlight,
        GroupShiftHighlight,
        GroupShiftUnhighlight,
        Count,
    };
}

