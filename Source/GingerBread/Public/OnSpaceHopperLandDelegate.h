#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnSpaceHopperLandDelegate.generated.h"

class ASpaceHopper;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpaceHopperLand, ASpaceHopper*, SpaceHopper, FVector, Position);

