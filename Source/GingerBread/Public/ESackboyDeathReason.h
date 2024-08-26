#pragma once
#include "CoreMinimal.h"
#include "ESackboyDeathReason.generated.h"

UENUM(BlueprintType)
namespace ESackboyDeathReason {
    enum Type {
        KillFloor,
        Offscreen,
        OffscreenRespawnCopter,
        None,
    };
}

