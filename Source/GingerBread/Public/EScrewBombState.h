#pragma once
#include "CoreMinimal.h"
#include "EScrewBombState.generated.h"

UENUM(BlueprintType)
namespace EScrewBombState {
    enum Type {
        Hanging,
        Descending,
        Fastening,
        CountingDown,
        PoppingOut,
        Max,
    };
}

