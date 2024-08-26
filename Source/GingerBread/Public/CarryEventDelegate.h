#pragma once
#include "CoreMinimal.h"
#include "CarryEventDelegate.generated.h"

class UPrimitiveComponent;
class USackboyCarryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCarryEvent, USackboyCarryComponent*, CarryComponent, UPrimitiveComponent*, Primitive);

