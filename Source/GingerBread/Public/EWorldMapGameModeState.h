#pragma once
#include "CoreMinimal.h"
#include "EWorldMapGameModeState.generated.h"

UENUM(BlueprintType)
enum class EWorldMapGameModeState : uint8 {
    WaitForRegistrar,
    WaitForValidHostData,
    Setup,
    WaitOnHostDataSync,
    WaitOnMultiplayerSync,
    BeginSequence,
    SequenceIsRunning,
};

