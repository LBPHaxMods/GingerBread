#pragma once
#include "CoreMinimal.h"
#include "VexFinalItemAttackItemSpawnDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalItemAttackItemSpawnDelegate, AActor*, SpawnedActor);

