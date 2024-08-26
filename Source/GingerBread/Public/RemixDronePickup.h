#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "RemixDronePickup.generated.h"

class ARemixDrone;

UCLASS(Blueprintable)
class ARemixDronePickup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARemixDrone* Drone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PickupType;
    
public:
    ARemixDronePickup(const FObjectInitializer& ObjectInitializer);

};

