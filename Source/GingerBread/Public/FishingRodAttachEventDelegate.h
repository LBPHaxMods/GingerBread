#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FishingRodAttachEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFishingRodAttachEvent, AActor*, HitActor, UPrimitiveComponent*, HitCollider, ASackboy*, Sackboy, FVector, attach_position);

