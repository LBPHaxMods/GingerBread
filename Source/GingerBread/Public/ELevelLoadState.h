#pragma once
#include "CoreMinimal.h"
#include "ELevelLoadState.generated.h"

UENUM(BlueprintType)
enum class ELevelLoadState : uint8 {
    Initialise,
    WaitForLoadingScreen,
    WaitForTransition,
    WaitForCutscene,
    WaitForRespawnSequence,
    Finalise,
    Ready,
};

