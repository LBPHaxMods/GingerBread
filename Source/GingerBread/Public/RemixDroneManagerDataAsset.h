#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeDataAsset.h"
#include "RemixDroneManagerDataAsset.generated.h"

class ARemixDrone;

UCLASS(Blueprintable)
class URemixDroneManagerDataAsset : public UTimedChallengeDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARemixDrone> Drone;
    
    URemixDroneManagerDataAsset();

};

