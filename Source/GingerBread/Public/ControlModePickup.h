#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Collectable.h"
#include "ControlModeDelegateDelegate.h"
#include "EControlMode.h"
#include "ControlModePickup.generated.h"

class ASackboy;
class UAkAudioEvent;

UCLASS(Blueprintable)
class GINGERBREAD_API AControlModePickup : public AActor, public ICollectable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EControlMode PickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> SacksToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnCollisionActivateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickupAnimationOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlModeDelegate OnPickUpDelegate;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipItemAudioEffects[5];
    
public:
    AControlModePickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryToEnterNewControlMode(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetText(EControlMode control_mode);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawned(EControlMode control_mode, FVector Force, float collection_delay);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollectedBySackboy(ASackboy* CollectingSackboy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_CollectedBySackboy(ASackboy* CollectingSackboy);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool SupportsClientCollectionCSP() override PURE_VIRTUAL(SupportsClientCollectionCSP, return false;);
    
    UFUNCTION()
    void OnClientCollectionCSP(AActor* CollectingActor) override PURE_VIRTUAL(OnClientCollectionCSP,);
    
};

