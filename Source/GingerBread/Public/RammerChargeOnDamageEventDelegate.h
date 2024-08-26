#pragma once
#include "CoreMinimal.h"
#include "RammerChargeOnDamageEventDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRammerChargeOnDamageEvent, AActor*, Actor, UPrimitiveComponent*, PrimitiveComponent, int32, HealthModified);

