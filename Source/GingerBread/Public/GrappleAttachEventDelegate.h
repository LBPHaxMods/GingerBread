#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrappleAttachEventDelegate.generated.h"

class ASackboy;
class UGrappleTargetComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGrappleAttachEvent, UGrappleTargetComponent*, GrappleTarget, ASackboy*, Sackboy, UPrimitiveComponent*, Primitive, FVector, Location);

