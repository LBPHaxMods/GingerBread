#pragma once
#include "CoreMinimal.h"
#include "EFlameJet2AudioState.generated.h"

UENUM(BlueprintType)
enum class EFlameJet2AudioState : uint8 {
    Off,
    WarmUp,
    On,
};

