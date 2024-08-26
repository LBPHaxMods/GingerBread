#pragma once
#include "CoreMinimal.h"
#include "SurfaceChangeDelDelegate.generated.h"

class USumoPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSurfaceChangeDel, const USumoPhysicalMaterial*, Surface);

