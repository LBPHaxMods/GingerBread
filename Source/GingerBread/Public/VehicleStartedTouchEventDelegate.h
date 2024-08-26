#pragma once
#include "CoreMinimal.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "VehicleStartedTouchEventDelegate.generated.h"

class AActor;
class ASackboyVehicleBase;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FVehicleStartedTouchEvent, AActor*, TouchedActor, UPrimitiveComponent*, TouchedCollider, ASackboyVehicleBase*, Vehicle, ESackboyDetection, DetectionType, ESackboyDetectionDetails, DetectionDetails);

