#pragma once
#include "CoreMinimal.h"
#include "EFlameJetAudioState.generated.h"

UENUM(BlueprintType)
namespace EFlameJetAudioState {
    enum Type {
        Off,
        WarmUp,
        On,
    };
}

