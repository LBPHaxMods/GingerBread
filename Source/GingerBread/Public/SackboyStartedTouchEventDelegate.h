#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "SackboyStartedTouchEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FSackboyStartedTouchEvent, AActor*, TouchedActor, UPrimitiveComponent*, TouchedCollider, ASackboy*, Sackboy, ESackboyDetection, DetectionType, ESackboyDetectionDetails, DetectionDetails, FVector, UsefulVec, int32, UsefulInt);

