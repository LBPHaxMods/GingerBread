#pragma once
#include "CoreMinimal.h"
#include "CritterReceptacleActorRejectedDelegate.generated.h"

class AActor;
class ACritterReceptacle;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCritterReceptacleActorRejected, ACritterReceptacle*, CritterReceptacle, ASackboy*, ThrownBy, AActor*, RejectedActor);

