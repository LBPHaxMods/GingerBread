#pragma once
#include "CoreMinimal.h"
#include "SuperAttackStartDelegate.generated.h"

class UKingFroogleCoordinatedSuperAttack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuperAttackStart, UKingFroogleCoordinatedSuperAttack*, CoordinatedBehaviour);

