#pragma once
#include "CoreMinimal.h"
#include "SplineSpawner.h"
#include "WakeSleep.h"
#include "RingSpawner.generated.h"

class ASplineFollowerLeader;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class ARingSpawner : public ASplineSpawner, public IWakeSleep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineFollowerLeader* SplineFollowerLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Diameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    ARingSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RecalculateRingScale();
    

    // Fix for true pure virtual functions not being implemented
};

