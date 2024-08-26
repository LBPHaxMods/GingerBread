#pragma once
#include "CoreMinimal.h"
#include "ESackboyMeshPart.generated.h"

UENUM(BlueprintType)
enum class ESackboyMeshPart : uint8 {
    HeadTop,
    HeadBack,
    HeadFront,
    HeadEyes,
    HeadLower,
    TorsoTop,
    TorsoMid,
    TorsoHips,
    TorsoZipTop,
    TorsoZipPull,
    ArmRightTop,
    ArmLeftTop,
    ArmRightLower,
    ArmLeftLower,
    HandRight,
    HandLeft,
    LegRightTop,
    LegLeftTop,
    LegRightMid,
    LegLeftMid,
    FootRight,
    FootLeft,
    Count,
    Neck,
};

