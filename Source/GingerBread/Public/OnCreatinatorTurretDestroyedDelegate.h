#pragma once
#include "CoreMinimal.h"
#include "OnCreatinatorTurretDestroyedDelegate.generated.h"

class ACreatinatorTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatinatorTurretDestroyed, ACreatinatorTurretBase*, destroyedTurret);

