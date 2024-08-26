#pragma once
#include "CoreMinimal.h"
#include "OnQuantityChangedEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnQuantityChangedEvent, const FString&, theItemName, int32, newQuantity, int32, oldQuantity, ASackboy*, playerSackboy);

