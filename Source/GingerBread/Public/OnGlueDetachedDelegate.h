#pragma once
#include "CoreMinimal.h"
#include "OnGlueDetachedDelegate.generated.h"

class UGlueCollectableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlueDetached, UGlueCollectableComponent*, GlueCollectableComponent);

