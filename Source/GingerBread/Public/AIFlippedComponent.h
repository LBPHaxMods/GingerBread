#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIFlippedServerData.h"
#include "AIFlippedComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIFlippedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlippedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalFlippedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanModifyPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSelfUnflip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* DazeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DazeVFXComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlippedServerData, meta=(AllowPrivateAccess=true))
    FAIFlippedServerData Rep_FlippedServerData;
    
public:
    UAIFlippedComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerFlipped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void TriggerDazeVFX();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlippedServerData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilRecovery() const;
    
    UFUNCTION(BlueprintCallable)
    void EndFlipped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void EndDazeVFX();
    
};

