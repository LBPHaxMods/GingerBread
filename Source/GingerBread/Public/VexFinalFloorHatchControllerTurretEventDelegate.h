#pragma once
#include "CoreMinimal.h"
#include "VexFinalFloorHatchControllerTurretEventDelegate.generated.h"

class ACreatinatorTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalFloorHatchControllerTurretEvent, ACreatinatorTurretBase*, Turret);

