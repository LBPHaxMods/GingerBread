#pragma once
#include "CoreMinimal.h"
#include "ETemporaryScoreBubbleState.generated.h"

UENUM()
enum class ETemporaryScoreBubbleState : int32 {
    WaitingForPopIn,
    PoppingIn,
    Idle,
    PoppingOut,
    FinishedPopOut,
    Collected,
};

