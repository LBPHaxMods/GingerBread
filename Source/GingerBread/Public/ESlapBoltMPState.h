#pragma once
#include "CoreMinimal.h"
#include "ESlapBoltMPState.generated.h"

UENUM(BlueprintType)
enum class ESlapBoltMPState : uint8 {
    Seated,
    Rising,
    Lowering,
    UnScrewed,
};

