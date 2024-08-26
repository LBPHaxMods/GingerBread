#pragma once
#include "CoreMinimal.h"
#include "OnBeeWasPoppedDelegate.generated.h"

class ABoomblebee;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeeWasPopped, ABoomblebee*, Bee);

