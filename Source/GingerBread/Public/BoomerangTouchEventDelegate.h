#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoomerangTouchEventDelegate.generated.h"

class AActor;
class ABoomerangProjectile;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FBoomerangTouchEvent, AActor*, HitActor, UPrimitiveComponent*, HitCollider, ASackboy*, Sackboy, ABoomerangProjectile*, Boomerang, FVector, Velocity, int32, chargeLevel, float, boomerangDamage);

