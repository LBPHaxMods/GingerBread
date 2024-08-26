#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FishingRodHitEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFishingRodHitEvent, AActor*, HitActor, UPrimitiveComponent*, HitCollider, ASackboy*, Sackboy, FVector, Velocity);

