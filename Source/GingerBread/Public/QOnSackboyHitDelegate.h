#pragma once
#include "CoreMinimal.h"
#include "QOnSackboyHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQOnSackboyHit, uint8, turretIndex);

