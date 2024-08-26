#pragma once
#include "CoreMinimal.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "SackboyStoppedTouchEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSackboyStoppedTouchEvent, AActor*, TouchedActor, UPrimitiveComponent*, TouchedCollider, ASackboy*, Sackboy, ESackboyDetection, DetectionType, ESackboyDetectionDetails, DetectionDetails);

