#pragma once
#include "CoreMinimal.h"
#include "MemoryOrb.h"
#include "MemoryOrbSpline.generated.h"

class UParticleSystemComponent;
class USplineComponent;
class USplineFollowerComponent;

UCLASS(Blueprintable)
class AMemoryOrbSpline : public AMemoryOrb {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineFollowerComponent* SplineFollower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerEffectDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineTravelTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TriggeredTimeStamp, meta=(AllowPrivateAccess=true))
    float Server_TriggeredTimeStamp;
    
public:
    AMemoryOrbSpline(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SpawnEmitter();
    
    UFUNCTION(BlueprintCallable)
    void OnSplinePointReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards, int32 SplinePointIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TriggeredTimeStamp();
    
};

