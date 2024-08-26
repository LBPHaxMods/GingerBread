#pragma once
#include "CoreMinimal.h"
#include "OnBeeExpiredDelegate.generated.h"

class ABoomblebee;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeeExpired, ABoomblebee*, Bee);

