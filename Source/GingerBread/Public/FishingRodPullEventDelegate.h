#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FishingRodPullEventDelegate.generated.h"

class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFishingRodPullEvent, UPrimitiveComponent*, Collider, ASackboy*, Sackboy, FVector, Position, FVector, Force);

