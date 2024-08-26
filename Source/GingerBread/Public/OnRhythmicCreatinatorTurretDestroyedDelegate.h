#pragma once
#include "CoreMinimal.h"
#include "OnRhythmicCreatinatorTurretDestroyedDelegate.generated.h"

class ARhythmicCreatinatorTurretBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRhythmicCreatinatorTurretDestroyed, ARhythmicCreatinatorTurretBase*, destroyedTurret);

