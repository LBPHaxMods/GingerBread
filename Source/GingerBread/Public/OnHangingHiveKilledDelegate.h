#pragma once
#include "CoreMinimal.h"
#include "OnHangingHiveKilledDelegate.generated.h"

class AHangingHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHangingHiveKilled, AHangingHive*, Hive);

