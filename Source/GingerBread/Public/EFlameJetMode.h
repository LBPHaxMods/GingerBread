#pragma once
#include "CoreMinimal.h"
#include "EFlameJetMode.generated.h"

UENUM(BlueprintType)
namespace EFlameJetMode {
    enum Type {
        AlwaysInactive,
        AlwaysActive,
        LoopStates,
    };
}

