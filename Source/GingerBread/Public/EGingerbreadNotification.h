#pragma once
#include "CoreMinimal.h"
#include "EGingerbreadNotification.generated.h"

UENUM(BlueprintType)
namespace EGingerbreadNotification {
    enum Type {
        Dialog,
        MultiSelect,
        Event,
        Progress,
        Prompt,
    };
}

