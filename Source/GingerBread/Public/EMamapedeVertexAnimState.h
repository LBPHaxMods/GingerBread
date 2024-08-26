#pragma once
#include "CoreMinimal.h"
#include "EMamapedeVertexAnimState.generated.h"

UENUM()
enum class EMamapedeVertexAnimState : int32 {
    Inflated,
    Popping,
    Popped,
    Inflating,
};

