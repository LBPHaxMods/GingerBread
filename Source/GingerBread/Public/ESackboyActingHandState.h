#pragma once
#include "CoreMinimal.h"
#include "ESackboyActingHandState.generated.h"

UENUM(BlueprintType)
enum class ESackboyActingHandState : uint8 {
    Openhanded,
    ClosedFist,
    Thumbsup,
    Pointing,
    Peace,
    MetalHorns,
    NumStates,
};

