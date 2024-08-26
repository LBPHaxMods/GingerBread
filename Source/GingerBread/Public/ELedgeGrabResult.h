#pragma once
#include "CoreMinimal.h"
#include "ELedgeGrabResult.generated.h"

UENUM(BlueprintType)
enum class ELedgeGrabResult : uint8 {
    Completed,
    NoOverlaps,
    NoRayHits,
    BestFailedChecks,
    NoFrontFace,
    FrontFaceSticksOut,
    FrontFaceAtWeirdAngle,
    ThinLedge,
};

