#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EEnemyLevelType.h"
#include "EVexFinalTricksterAttackType.h"
#include "EWorldLocation.h"
#include "Templates/SubclassOf.h"
#include "VexFinalTricksterAttackSimpleDelegateDelegate.h"
#include "VexFinalTricksterAttack.generated.h"

class AAIPatrolBase;
class AAISpawner;
class ABaseHealthCapsule;
class ACrumpler;
class AGingerbreadAICharacter;
class ASackboy;
class AVexFinalEncounter;
class UAkComponent;
class UCSPHelperComponent;
class UCurveFloat;
class UDecalComponent;
class UParticleSystemComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Abstract, Blueprintable)
class AVexFinalTricksterAttack : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* ShadowComponentHQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* HandAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailVFXComponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailVFXComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailVFXComponent3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailVFXComponent4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* TrailAkComponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* TrailAkComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* TrailAkComponent3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* TrailAkComponent4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalEncounter* Vex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LifeThrowLocationActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LifeStealTrailVFXScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OtherAttacksTrailVFXScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TrailMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TrailHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrumpler> CrumplerSpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrumplerFloorTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrumplerFloorHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeStealTargetDistanceFromScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MinLifeNumberValuePerNumberOfLivingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxNumberOfLivesToStealPerNumberOfLivingPlayers_Fight1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxNumberOfLivesToStealPerNumberOfLivingPlayers_Fight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumberOfLivesToSteal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeStealLaunchArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseHealthCapsule> LifePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAISpawner> TransformAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyLevelType TransformAILevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation TransformAIWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPatrolBase* TransformAIPatrolObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransformSackboyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* EmissiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHQShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HQShadowRTIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalTricksterAttackSimpleDelegate TricksterAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalTricksterAttackSimpleDelegate TricksterAttackComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EVexFinalTricksterAttackType CurrentAttackType;
    
public:
    AVexFinalTricksterAttack(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void SwapSackboys_CSPAction(TArray<uint64> IntArray);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVexLifeSpawned(const FVector& SpawnLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVexDefeated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrailHit(const FVector& TrailHitLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSnapNotify();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSnap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyUntransform(const FVector& UntransformLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyTransform(AGingerbreadAICharacter* TransformedAI);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboySwapped(ASackboy* SwappedSackboy, const FVector& SwapLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandDespawned();
    
private:
    UFUNCTION()
    void OnCSPEventArray(uint32 EventCode, TArray<uint64> IntArray);
    
    UFUNCTION()
    void OnCSPEvent(uint32 EventCode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrumplerSpawned(const FVector& CrumplerFloorLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(AAISpawner* Spawner, const TArray<AGingerbreadAICharacter*>& AIs);
    
public:
    UFUNCTION(BlueprintCallable)
    void FireTricksterAttack(EVexFinalTricksterAttackType AttackType);
    
private:
    UFUNCTION(BlueprintCallable)
    void CrumplerTrapTriggered(ACrumpler* Crumpler);
    
};

