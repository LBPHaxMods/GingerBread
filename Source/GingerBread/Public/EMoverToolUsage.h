#pragma once
#include "CoreMinimal.h"
#include "EMoverToolUsage.generated.h"

UENUM(BlueprintType)
enum class EMoverToolUsage : uint8 {
    Default,
    Door,
    Platform_Static,
    Platform,
    Interactive,
    NonInteractive,
};

