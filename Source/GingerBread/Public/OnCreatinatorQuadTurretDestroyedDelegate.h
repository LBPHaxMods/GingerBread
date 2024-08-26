#pragma once
#include "CoreMinimal.h"
#include "OnCreatinatorQuadTurretDestroyedDelegate.generated.h"

class ACreatinatorQuadTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatinatorQuadTurretDestroyed, ACreatinatorQuadTurretBase*, destroyedTurret);

