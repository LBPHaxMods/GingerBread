#pragma once
#include "CoreMinimal.h"
#include "OnESportsreatinatorTurretHatDestroyedDelegate.generated.h"

class AESportsCreatinatorTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnESportsreatinatorTurretHatDestroyed, AESportsCreatinatorTurretBase*, destroyedTurret);

