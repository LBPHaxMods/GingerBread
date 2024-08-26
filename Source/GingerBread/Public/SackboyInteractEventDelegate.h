#pragma once
#include "CoreMinimal.h"
#include "SackboyInteractEventDelegate.generated.h"

class AActor;
class ASackboy;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSackboyInteractEvent, AActor*, EnteredActor, UInteractionComponent*, EnteredCollider, ASackboy*, Sackboy);

