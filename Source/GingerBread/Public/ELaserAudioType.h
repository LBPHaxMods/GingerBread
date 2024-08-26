#pragma once
#include "CoreMinimal.h"
#include "ELaserAudioType.generated.h"

UENUM(BlueprintType)
enum class ELaserAudioType : uint8 {
    Static,
    BackAndForth,
    CircularRotation,
};

