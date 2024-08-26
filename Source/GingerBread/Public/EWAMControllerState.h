#pragma once
#include "CoreMinimal.h"
#include "EWAMControllerState.generated.h"

UENUM(BlueprintType)
namespace EWAMControllerState {
    enum Type {
        DisabledState,
        PreGameInitialState,
        PreGameTriggerReadyState,
        RunState,
        WonGameState,
        LostGameState,
    };
}

