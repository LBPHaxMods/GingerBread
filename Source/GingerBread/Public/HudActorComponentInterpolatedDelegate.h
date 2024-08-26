#pragma once
#include "CoreMinimal.h"
#include "HudActorComponentInterpolatedDelegate.generated.h"

class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudActorComponentInterpolated, USceneComponent*, MovedComponent);

