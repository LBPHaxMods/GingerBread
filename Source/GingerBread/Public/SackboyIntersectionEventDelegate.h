#pragma once
#include "CoreMinimal.h"
#include "SackboyIntersectionEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSackboyIntersectionEvent, AActor*, EnteredActor, UPrimitiveComponent*, EnteredCollider, ASackboy*, Sackboy);

