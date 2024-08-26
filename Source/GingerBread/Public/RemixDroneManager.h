#pragma once
#include "CoreMinimal.h"
#include "TimedChallenge.h"
#include "RemixDroneManager.generated.h"

class ARemixDrone;

UCLASS(Blueprintable)
class ARemixDroneManager : public ATimedChallenge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARemixDrone> m_Drone;
    
public:
    ARemixDroneManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

