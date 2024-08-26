#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ThrowTargetEventDelegate.generated.h"

class ASackboy;
class UPrimitiveComponent;
class UThrowTargetComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FThrowTargetEvent, UThrowTargetComponent*, ThrowTarget, ASackboy*, Sackboy, UPrimitiveComponent*, Primitive, FVector, Location);

