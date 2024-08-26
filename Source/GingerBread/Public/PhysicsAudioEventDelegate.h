#pragma once
#include "CoreMinimal.h"
#include "PhysicsContactEvent.h"
#include "PhysicsAudioEventDelegate.generated.h"

class UAkComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhysicsAudioEvent, const FPhysicsContactEvent, ContactEvent, UAkComponent*, AkComponent);

