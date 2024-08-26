#pragma once
#include "CoreMinimal.h"
#include "EScreenTransitionState.generated.h"

UENUM(BlueprintType)
enum class EScreenTransitionState : uint8 {
    Off,
    Intro,
    On,
    Outro,
};

