#pragma once
#include "CoreMinimal.h"
#include "ESackboyUTurnStyle.generated.h"

UENUM(BlueprintType)
enum class ESackboyUTurnStyle : uint8 {
    Short,
    FromBellySlide,
    FromSlide,
    Flip,
    OnFlagline,
};

