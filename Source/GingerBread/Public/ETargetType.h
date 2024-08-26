#pragma once
#include "CoreMinimal.h"
#include "ETargetType.generated.h"

UENUM(BlueprintType)
enum class ETargetType : uint8 {
    Point,
    Line,
    Box,
    Sphere,
    Capsule,
    Cylinder,
    HollowCylinder,
    Disc,
    Spline,
};

