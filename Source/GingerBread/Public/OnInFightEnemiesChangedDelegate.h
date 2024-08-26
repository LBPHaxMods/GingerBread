#pragma once
#include "CoreMinimal.h"
#include "OnInFightEnemiesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInFightEnemiesChanged, int32, NumOfEnemiesInFight);

