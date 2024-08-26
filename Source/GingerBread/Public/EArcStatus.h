#pragma once
#include "CoreMinimal.h"
#include "EArcStatus.generated.h"

UENUM(BlueprintType)
namespace EArcStatus {
    enum Type {
        Safe,
        Caution,
        Danger,
        Max,
    };
}

