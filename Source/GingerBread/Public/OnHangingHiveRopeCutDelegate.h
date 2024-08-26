#pragma once
#include "CoreMinimal.h"
#include "OnHangingHiveRopeCutDelegate.generated.h"

class AHangingHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHangingHiveRopeCut, AHangingHive*, Hive);

