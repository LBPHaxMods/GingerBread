#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "EPickupContainerOverrideContent.h"
#include "EPickupContainerState.h"
#include "PickupContainerAllPickupsSpawnedDelegate.h"
#include "PickupContainerMemoryOrbSpawnedDelegate.h"
#include "PickupContainerOpenWithModifierTableRowInfo.h"
#include "PickupContainerOpenedDelegate.h"
#include "PickupContainerPickupSpawnedDelegate.h"
#include "PickupContainerPostFinishedSpawningDelegate.h"
#include "PickupContainerPrizeBubbleSpawnedDelegate.h"
#include "PickupContainerVoidEnergySpawnedDelegate.h"
#include "SpawnedActor.h"
#include "PickupContainerComponent.generated.h"

class AActor;
class AMemoryOrb;
class ASackboy;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPickupContainerComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool neverSpawnLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool neverSpawnScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool neverSpawnCollectabells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RewardsDataTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool spawnLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickupContainerOverrideContent OverrideContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToyIDRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool spawnScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool spawnvoidEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCollectabells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float percentageMaxCollectabells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrizeReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MemoryOrb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMemoryOrb* MemoryOrbInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceScoreMultiplierAutoCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLifeAutoCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessiveSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOrbAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DustRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OrbSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSysTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AuraRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ContainerAura_PS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ContainerAuraDestroyed, meta=(AllowPrivateAccess=true))
    bool bContainerAuraDestroyed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float spawnVelocityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float spawnVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawningVelocityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawningVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float spawnVelocityHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnCollisionParameter;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerOpened OnContainerOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerPickupSpawned OnPickupSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerAllPickupsSpawned OnAllPickupsSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerPostFinishedSpawning PostFinishedSpawning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerMemoryOrbSpawned OnMemoryOrbSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerPrizeBubbleSpawned OnPrizeBubbleSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerVoidEnergySpawned OnVoidEnergySpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnedPickups, meta=(AllowPrivateAccess=true))
    TArray<FSpawnedActor> SpawnedPickups;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EPickupContainerState State;
    
public:
    UPickupContainerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillSpawnPrizeBubble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillSpawnMemoryOrb() const;
    
    UFUNCTION(BlueprintCallable)
    void SetToyOverride(EPickupContainerOverrideContent ToyOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnVoidEnergy(bool NewSpawnvoidEnergy);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnVelocityMin(float NewSpawnVelocityMin);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnVelocityMax(float NewSpawnVelocityMax);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnVelocityHalfAngle(float NewSpawnVelocityHalfAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnScoreMultiplier(bool NewSpawnScoreMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnRadius(float NewSpawnRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnLife(bool NewSpawnLife);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnDirection(const FVector& NewSpawnDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnBigLife(bool spawnBigLife);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(int32 NewScore);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardDataTableEntry(FDataTableRowHandle InRewardsDataTableEntry);
    
    UFUNCTION(BlueprintCallable)
    void SetPrizeReference(FDataTableRowHandle NewPrizeReference);
    
    UFUNCTION(BlueprintCallable)
    void SetPercentMaxCollectabells(float NewPercentageMaxCollectabells);
    
    UFUNCTION(BlueprintCallable)
    void SetNumCollectabells(int32 NewNumCollectabells);
    
    UFUNCTION(BlueprintCallable)
    void SetNeverSpawnScore(bool NewNeverSpawnScore);
    
    UFUNCTION(BlueprintCallable)
    void SetNeverSpawnLives(bool NewNeverSpawnLives);
    
    UFUNCTION(BlueprintCallable)
    void SetNeverSpawnCollectabells(bool NewNeverSpawnCollectabells);
    
    UFUNCTION(BlueprintCallable)
    void SetMemoryReference(FDataTableRowHandle MemoryReference);
    
    UFUNCTION(BlueprintCallable)
    void SetMemoryOrb(AMemoryOrb* NewMemoryOrb);
    
    UFUNCTION(BlueprintCallable)
    void ResetPickupContainer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool OpenContainerWithModifierTableRowInfo(ASackboy* Instigator, const FPickupContainerOpenWithModifierTableRowInfo& OpeningInfo, int32& OutPickupsToSpawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedPickups();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ContainerAuraDestroyed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPickupContainerManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpawnedAllPickups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPickupsToSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpawnedPickups(const bool IncludeInvalidRefs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSpawnedPickups() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ContainerOpened(const int32 PickupsToSpawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnContents() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyVelocity(AActor* toImpulse, const FVector& LaunchVelocity, bool AddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void ApplyImpulse(AActor* toImpulse, const FVector& LaunchImpulse);
    
};

