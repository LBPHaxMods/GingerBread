#pragma once
#include "CoreMinimal.h"
#include "OnOnScreenEnemiesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnScreenEnemiesChanged, int32, NumOfEnemiesOnScreen);
