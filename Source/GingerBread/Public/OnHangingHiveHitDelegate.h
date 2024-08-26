#pragma once
#include "CoreMinimal.h"
#include "OnHangingHiveHitDelegate.generated.h"

class AHangingHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHangingHiveHit, AHangingHive*, Hive);

