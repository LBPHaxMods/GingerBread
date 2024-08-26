#pragma once
#include "CoreMinimal.h"
#include "OnSackboyHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSackboyHit, uint8, turretIndex);

