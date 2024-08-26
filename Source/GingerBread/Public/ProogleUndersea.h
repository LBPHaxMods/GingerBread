#pragma once
#include "CoreMinimal.h"
#include "EProogleLaunchType.h"
#include "Proogle.h"
#include "ProogleUndersea.generated.h"

class UInteractionComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AProogleUndersea : public AProogle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AttackDamageCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* AttackDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttackSpinVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttackTrailVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttackTakeoffVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttackLandingVFX;
    
    AProogleUndersea(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_LaunchStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_LaunchEnd();
    
    UFUNCTION(BlueprintCallable)
    void LaunchStartCallback(EProogleLaunchType LaunchType);
    
    UFUNCTION(BlueprintCallable)
    void LaunchEndCallback(EProogleLaunchType LaunchType);
    
};

