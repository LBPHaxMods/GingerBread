#pragma once
#include "CoreMinimal.h"
#include "CritterReceptacleActorCountedDelegate.generated.h"

class AActor;
class ACritterReceptacle;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCritterReceptacleActorCounted, ACritterReceptacle*, CritterReceptacle, ASackboy*, ThrownBy, AActor*, CountedActor);

