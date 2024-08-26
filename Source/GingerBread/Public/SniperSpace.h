#pragma once
#include "CoreMinimal.h"
#include "OnBoosterStartDelegate.h"
#include "OnBoosterStopDelegate.h"
#include "Sniper.h"
#include "SniperSpace.generated.h"

class UParticleSystemComponent;
class USniperHoverComponent;

UCLASS(Blueprintable)
class ASniperSpace : public ASniper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BoosterRightVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BoosterLeftVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* JetpackLaunchVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USniperHoverComponent* HoverComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoosterStart OnBoosterStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoosterStop OnBoosterStop;
    
    ASniperSpace(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnBoosterStop_Internal();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnBoosterStart_Internal();
    
};

