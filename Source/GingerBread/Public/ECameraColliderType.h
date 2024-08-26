#pragma once
#include "CoreMinimal.h"
#include "ECameraColliderType.generated.h"

UENUM(BlueprintType)
enum class ECameraColliderType : uint8 {
    Box,
    Convex,
    Point,
    Cylinder,
    HollowCylinder,
    Spline,
};

