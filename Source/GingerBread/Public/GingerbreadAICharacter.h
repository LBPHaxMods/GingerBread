#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "AISpawnerInfo.h"
#include "CustomBBKeySelector.h"
#include "DarkMatterEngineMovable.h"
#include "Destroyer.h"
#include "EAIExternalManipulationReason.h"
#include "EAISpawnState.h"
#include "EEnemyLevelType.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "GBLandedSignatureDelegate.h"
#include "HitPointsComponentEventReceiver.h"
#include "Launchable.h"
#include "OnDeathDelegate.h"
#include "OnHitPointsAttemptDelegate.h"
#include "ReceptacleObject.h"
#include "SackboyDetection.h"
#include "Velociportable.h"
#include "WakeSleep.h"
#include "GingerbreadAICharacter.generated.h"

class AAIPatrolBase;
class AActor;
class ABoomerangProjectile;
class ACritterReceptacle;
class AGingerbreadGameMode;
class ANavigationData;
class ASackboy;
class UAIActionComponent;
class UAIConalDetectorComponent;
class UAICoordinatorRegistrationComponent;
class UAIHookPointKeeperComponent;
class UAINavTargetHandlerComponent;
class UAISlideComponent;
class UAggravationComponent;
class UAkAudioEvent;
class UAkComponent;
class UAlertComponent;
class UBBConfigComponent;
class UBlackboardComponent;
class UBlastersTargetComponent;
class UCSPHelperComponent;
class UCraftCutterTargetComponent;
class UGBCharacterMovementComponent;
class UGameplayTagComponent;
class UGrappleTargetComponent;
class UHitPointsComponent;
class UHitReactionComponent;
class UInteractionComponent;
class UObject;
class UParticleSystem;
class UPickupContainerComponent;
class UPoIComponent;
class UPrimitiveComponent;
class USackboyJumpStompTargetComponent;
class USackboySlapTargetComponent;
class USpawnPointComponent;
class USpotShadowComponent;
class USurfaceDeformationComponent;
class UThrowTargetComponent;

UCLASS(Blueprintable, MinimalAPI)
class AGingerbreadAICharacter : public ACharacter, public ILaunchable, public IWakeSleep, public IVelociportable, public IHitPointsComponentEventReceiver, public ISackboyDetection, public IReceptacleObject, public IDestroyer, public IDarkMatterEngineMovable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeathCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsAttempt OnHitPointsAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGBLandedSignature GBLandedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseEyeXDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseEyeYDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCameraRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsCameraRelevantCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool BlockHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool BlockNonSackboyHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIPatrolBase> PatrolObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector PatrolObjectBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector NeedToReturnHomeBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector HomeLocationBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector ActiveCheckpointLocationBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector DoHitReactionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector IsDeadBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector IsInsideMonkeyBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector IsLaunchedByObjectSpitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector ExternalManipulationBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AI_Debugging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SackboyAttackInstigatorTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGingerbreadGameMode> GingerbreadGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SleepRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpawnState SpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyLevelType LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISpawnerInfo AssociatedSpawnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TertiaryColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathAKEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedsSpecialGroundedCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoIComponent* PoIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrappleTargetComponent* GrappleTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlastersTargetComponent* BlastersTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyJumpStompTargetComponent* SackboyJumpStompTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowTargetComponent* ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboySlapTargetComponent* SackboySlapTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAICoordinatorRegistrationComponent* AICoordinationRegistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIConalDetectorComponent* ConalDetectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBBConfigComponent* BBConfigComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactionComponent_RENAME_ME_AGAIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAlertComponent* AlertComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAggravationComponent* AggravationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIHookPointKeeperComponent* HookPointKeeperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurfaceDeformationComponent* SurfaceDeformationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAINavTargetHandlerComponent* NavTargetHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISlideComponent* SlideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StoredTurningAngle, meta=(AllowPrivateAccess=true))
    float Rep_StoredTurningAngle;
    
public:
    AGingerbreadAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateHitPointsResponse(const FDataTableRowHandle& Row);
    
    UFUNCTION(BlueprintCallable)
    void ToggleActiveComponents(bool State);
    
    UFUNCTION(BlueprintCallable)
    void StartHitReaction(FVector ImpactNormal, AActor* attacker, FName HitReactionName, bool clientOwnsHit);
    
    UFUNCTION(BlueprintCallable)
    void StartCelebration();
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletonActive(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetDetectionFlags();
    
    UFUNCTION(BlueprintCallable)
    void SetCorporeal(bool isCorporeal, bool AIEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsVector(const FBlackboardKeySelector& Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsString(const FBlackboardKeySelector& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsRotator(const FBlackboardKeySelector& Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsObject(const FBlackboardKeySelector& Key, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsName(const FBlackboardKeySelector& Key, FName Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsInt(const FBlackboardKeySelector& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsFloat(const FBlackboardKeySelector& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsEnum(const FBlackboardKeySelector& Key, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsClass(const FBlackboardKeySelector& Key, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValueAsBool(const FBlackboardKeySelector& Key, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAggravationTarget(AActor* ActorTarget);
    
    UFUNCTION(BlueprintCallable)
    void SelfDestruct();
    
    UFUNCTION(BlueprintCallable)
    void RequestDeath_Delayed0();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestDeath(const bool spawnRewards, AActor* Murderer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Rep_Die();
    
    UFUNCTION(BlueprintCallable)
    void OnSleep_Internal();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredTurningAngle();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPreDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnHitReactionStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnHitReactionFinished(TEnumAsByte<EBTNodeResult::Type> btNodeResult);
    
protected:
    UFUNCTION()
    void OnCSPFloatEvent(uint32 EventType, float Param1);
    
public:
    UFUNCTION(BlueprintCallable)
    void ManageDeath_Delayed0(AActor* Murderer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ManageDeath(AActor* Murderer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LoadFromConfig();
    
    UFUNCTION(BlueprintCallable)
    void InitialisePatrol(AAIPatrolBase* NewPatrolObject);
    
    UFUNCTION(BlueprintCallable)
    ASackboy* GetSackboyFromProxy(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANavigationData* GetNavData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGBCharacterMovementComponent* GetGBMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBlackboardValueAsVector(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBlackboardValueAsString(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetBlackboardValueAsRotator(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetBlackboardValueAsObject(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBlackboardValueAsName(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlackboardValueAsInt(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlackboardValueAsFloat(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBlackboardValueAsEnum(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetBlackboardValueAsClass(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlackboardValueAsBool(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBlackboardValueAsActor(const FBlackboardKeySelector& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlackboardComponent* GetBlackboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UAIActionComponent* GetActionComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void FadeToBlackEvent(USpawnPointComponent* spawn_point);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitExternalManipulationMode(EAIExternalManipulationReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterExternalManipulationMode(EAIExternalManipulationReason reason);
    
    UFUNCTION(BlueprintCallable)
    void EjectFromContainer(AActor* attacker, FVector ImpactNormal);
    
    UFUNCTION(BlueprintCallable)
    void DisableCollisionUntilOverlapEnds(UPrimitiveComponent* AICollisionComponent, UPrimitiveComponent* otherCollisionComponent, float SafeOffsetBetweenComponents);
    
    UFUNCTION(BlueprintCallable)
    void DisableCollisionPairPermanently(UPrimitiveComponent* colliderA, UPrimitiveComponent* colliderB);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Die(AActor* Murderer);
    
    UFUNCTION(BlueprintCallable)
    void DestroyWhileIncorporeal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Debug();
    
    UFUNCTION(BlueprintCallable)
    void ClearBlackboardValue(const FBlackboardKeySelector& Key);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool OnSackboyWantsToFallThroughMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyWantsToFallThroughMe, return false;);
    
    UFUNCTION()
    void OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) override PURE_VIRTUAL(OnSackboyStoppedTouchingMe,);
    
    UFUNCTION()
    void OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) override PURE_VIRTUAL(OnSackboyStartedTouchingMe,);
    
    UFUNCTION()
    void OnSackboySlappedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 SlapLevel, FVector slapHitLocation, bool isLeftHandSlap) override PURE_VIRTUAL(OnSackboySlappedMe,);
    
    UFUNCTION()
    void OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMeInteract,);
    
    UFUNCTION()
    void OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMe,);
    
    UFUNCTION()
    void OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMeInteract,);
    
    UFUNCTION()
    void OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMe,);
    
    UFUNCTION()
    void OnFishingRodPulledMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& Position, const FVector& Force) override PURE_VIRTUAL(OnFishingRodPulledMe,);
    
    UFUNCTION()
    void OnFishingRodHitMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& Velocity) override PURE_VIRTUAL(OnFishingRodHitMe,);
    
    UFUNCTION()
    void OnFishingRodDetachedFromMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodDetachedFromMe,);
    
    UFUNCTION()
    void OnFishingRodAttachedToMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodAttachedToMe,);
    
    UFUNCTION()
    void OnBoomerangHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ABoomerangProjectile* Boomerang, FVector Velocity, int32 charge_level, float boomerang_damage) override PURE_VIRTUAL(OnBoomerangHitMe,);
    
    UFUNCTION()
    void OnBlastersHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& hit_location, const FVector& hit_normal) override PURE_VIRTUAL(OnBlastersHitMe,);
    
    UFUNCTION()
    void OnExitReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnExitReceptacle,);
    
    UFUNCTION()
    void OnEnterReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnEnterReceptacle,);
    
    UFUNCTION()
    void OnEjectedByReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnEjectedByReceptacle,);
    
    UFUNCTION()
    void OnDestroyByReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnDestroyByReceptacle,);
    
    UFUNCTION()
    void OnCountedByReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnCountedByReceptacle,);
    
};

