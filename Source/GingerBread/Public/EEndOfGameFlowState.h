#pragma once
#include "CoreMinimal.h"
#include "EEndOfGameFlowState.generated.h"

UENUM(BlueprintType)
enum class EEndOfGameFlowState : uint8 {
    Unknown,
    NotStarted,
    StartCelebrationCutscene,
    StartCreditsSequence,
    StartWorld6IntroSequence,
    World6Unlocked,
    World6Finished,
    Completed,
};

