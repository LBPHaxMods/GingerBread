#pragma once
#include "CoreMinimal.h"
#include "OnHiveKilledDelegate.generated.h"

class AGroundedHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHiveKilled, AGroundedHive*, Hive);

