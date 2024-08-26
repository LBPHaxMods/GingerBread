#pragma once
#include "CoreMinimal.h"
#include "OnCreatinatorTurretHatDestroyedDelegate.generated.h"

class ACreatinatorTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatinatorTurretHatDestroyed, ACreatinatorTurretBase*, destroyedTurret);

