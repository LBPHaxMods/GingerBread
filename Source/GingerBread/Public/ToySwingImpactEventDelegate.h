#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ToySwingImpactEventDelegate.generated.h"

class ASackboy;
class UPrimitiveComponent;
class USumoPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FToySwingImpactEvent, ASackboy*, Sackboy, UPrimitiveComponent*, hitThis, const FVector, hitPosition, const FRotator, hitRotation, const USumoPhysicalMaterial*, hitMaterial);

