#pragma once
#include "CoreMinimal.h"
#include "CollectableCollectedDelegate.generated.h"

class ACollectableBase;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCollectableCollected, ACollectableBase*, Collectable, ASackboy*, CollectingSackboy);

