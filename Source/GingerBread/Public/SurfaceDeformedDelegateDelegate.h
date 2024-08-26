#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SurfaceDeformedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSurfaceDeformedDelegate, float, DeformationFactor, FVector, PositionOfDeformation);

