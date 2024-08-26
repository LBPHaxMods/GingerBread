#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimGrabbedState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimGrabbedState : uint8 {
    Grabbed,
    Released,
};

