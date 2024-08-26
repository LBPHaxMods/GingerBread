#pragma once
#include "CoreMinimal.h"
#include "RoundResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoundResult, int32, RoundNumber, bool, RoundWon);

