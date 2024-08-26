#pragma once
#include "CoreMinimal.h"
#include "EPrizeBubbleState.generated.h"

UENUM(BlueprintType)
enum class EPrizeBubbleState : uint8 {
    Idle,
    Floating,
    Collected,
};

