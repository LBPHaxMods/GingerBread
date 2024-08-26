#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "OnPowerUpCollectedDelegate.generated.h"

class APowerUpEquipper;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPowerUpCollected, APowerUpEquipper*, PowerUpEquipper, ASackboy*, InitialCollector, EControlMode, NewControlMode);

