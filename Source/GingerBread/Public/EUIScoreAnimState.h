#pragma once
#include "CoreMinimal.h"
#include "EUIScoreAnimState.generated.h"

UENUM(BlueprintType)
enum class EUIScoreAnimState : uint8 {
    None,
    ShowBag,
    OpenBag,
    CountUp,
    WaitForClose,
    HideBag,
};

