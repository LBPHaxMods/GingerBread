#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "PhaseLight.generated.h"

class AActor;
class APhaseLight;
class APhasePlatform;
class UInteractionComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class APhaseLight : public APlayerCountActor, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugOverlapEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphereBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphereOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionSphereOverlap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APhasePlatform>> OverlappingPhasePlatforms;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APhaseLight>> OverlappingPhaseLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugLogActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugLogOverride;
    
public:
    APhaseLight(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyLightSize(bool onOff, float targetSize);
    
    UFUNCTION(BlueprintCallable)
    bool IsOverlappingAnyPhasePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfOverlappingPhasePlatforms();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfOverlappingInversePhasePlatforms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfOverlappingAdditivePhasePlatforms() const;
    

    // Fix for true pure virtual functions not being implemented
};

