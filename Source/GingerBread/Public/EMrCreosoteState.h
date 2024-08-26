#pragma once
#include "CoreMinimal.h"
#include "EMrCreosoteState.generated.h"

UENUM(BlueprintType)
enum class EMrCreosoteState : uint8 {
    Idle,
    ChewHappy,
    ChewUnhappy,
    SpittingOut,
    WaferThinMint,
    Explode,
    PrepareBurp,
    StartBurp,
    Burp,
    Disappointed,
    Dreaming,
};

