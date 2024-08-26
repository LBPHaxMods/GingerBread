#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitPointModifyResult.h"
#include "OnCableCutDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCableCut, const FVector&, CutLocation, const FHitPointModifyResult&, DamageResult, AActor*, DamageActor, UPrimitiveComponent*, DamagePrimitive);

