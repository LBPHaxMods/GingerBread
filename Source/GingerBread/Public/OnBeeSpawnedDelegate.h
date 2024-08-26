#pragma once
#include "CoreMinimal.h"
#include "OnBeeSpawnedDelegate.generated.h"

class ABoomblebee;
class AGroundedHive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeeSpawned, AGroundedHive*, Hive, ABoomblebee*, Bee);

