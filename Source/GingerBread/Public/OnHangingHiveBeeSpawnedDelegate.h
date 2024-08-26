#pragma once
#include "CoreMinimal.h"
#include "OnHangingHiveBeeSpawnedDelegate.generated.h"

class ABoomblebee;
class AHangingHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHangingHiveBeeSpawned, AHangingHive*, Hive, ABoomblebee*, Bee);

