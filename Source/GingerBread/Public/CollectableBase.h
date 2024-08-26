#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "CollectableCollectedDelegate.h"
#include "CollectableReplicatedState.h"
#include "DarkMatterEngineMovable.h"
#include "ECollectableAction.h"
#include "FloatyBubbleEventReceiver.h"
#include "PickupContainerSpawnable.h"
#include "TreasureItem.h"
#include "Velociportable.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "CollectableBase.generated.h"

class AActor;
class ASackboy;
class UAkComponent;
class UCraftCutterTargetComponent;
class UGameplayTagComponent;
class UInteractionComponent;
class USackboyTracker;
class USphereComponent;
class UStaticMeshComponent;
class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class ACollectableBase : public APlayerCountActor, public ICollectable, public IWakeSleep, public IPickupContainerSpawnable, public IFloatyBubbleEventReceiver, public IVelociportable, public IDarkMatterEngineMovable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyTracker* SackboyTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreasureItem TreasureItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDestroyOnCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanImmediatelyCollectFromPickupContainer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* CollectingSackboyFromInitialisation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedState, meta=(AllowPrivateAccess=true))
    FCollectableReplicatedState ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseSackboyTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseCraftCutterTarget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectableCollected OnCollectedDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrackCollection;
    
public:
    ACollectableBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnSackboyTrackerDistanceExited(const int32 Index, ASackboy* pSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyTrackerDistanceEntered(const int32 Index, ASackboy* pSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedState(const FCollectableReplicatedState PreviousState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetCollectingSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollectableAction::Type> GetAction() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SupportsClientCollectionCSP() override PURE_VIRTUAL(SupportsClientCollectionCSP, return false;);
    
    UFUNCTION()
    void OnClientCollectionCSP(AActor* CollectingActor) override PURE_VIRTUAL(OnClientCollectionCSP,);
    
};

