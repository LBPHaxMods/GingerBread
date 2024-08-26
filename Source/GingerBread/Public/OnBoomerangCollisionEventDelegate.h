#pragma once
#include "CoreMinimal.h"
#include "OnBoomerangCollisionEventDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoomerangCollisionEvent, UPrimitiveComponent*, CollidingObject);

