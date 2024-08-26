#pragma once
#include "CoreMinimal.h"
#include "OnESportsCreatinatorTurretDestroyedDelegate.generated.h"

class AESportsCreatinatorTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnESportsCreatinatorTurretDestroyed, AESportsCreatinatorTurretBase*, destroyedTurret);

