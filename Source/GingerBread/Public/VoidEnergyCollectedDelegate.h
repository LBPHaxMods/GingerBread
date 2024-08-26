#pragma once
#include "CoreMinimal.h"
#include "VoidEnergyCollectedDelegate.generated.h"

class ASackboy;
class AVoidEnergy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoidEnergyCollected, AVoidEnergy*, VoidEnergy, ASackboy*, CollectingSackboy);

