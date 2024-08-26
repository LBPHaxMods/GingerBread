#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlastersHitEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBlastersHitEvent, AActor*, HitActor, UPrimitiveComponent*, HitCollider, ASackboy*, Sackboy, FVector, impact_position, FVector, impact_normal);

