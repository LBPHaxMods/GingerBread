#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPodState.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "PodInputEnabledEventDelegate.h"
#include "SackboyDetection.h"
#include "WorldMapPod.generated.h"

class ABoomerangProjectile;
class APodLandingPlatform;
class ASackboy;
class UControlScheme;
class UGingerbreadScreen;
class UInteractionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AWorldMapPod : public AActor, public ISackboyDetection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PodMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SackboyInputCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SackboyYankCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboyInputInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboyYankInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* InputSackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPodInputEnabledEvent OnInputEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> YankedSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SackboyCountAtYankDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PodPlatformOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPodState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetState, meta=(AllowPrivateAccess=true))
    EPodState AUTH_TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EntryInProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlScheme* PodEntryControlScheme;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HostInPod, meta=(AllowPrivateAccess=true))
    bool AUTH_HostInPod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedActivePlatform, meta=(AllowPrivateAccess=true))
    APodLandingPlatform* AUTH_ActivePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APodLandingPlatform* PreviousActivePlatform;
    
public:
    AWorldMapPod(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Server_OnWorldSelectScreenClosed(UGingerbreadScreen* screenPopped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshNewWorldPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyEnteredPod(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_TargetState_BP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedActivePlatform();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_HostInPod();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllSackboysEnteredPod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSequencePlaying();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSackboyEnteredPod(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void HandleFinalSackboyEnteredPod(TArray<ASackboy*>& EnteredSackboys);
    
public:
    UFUNCTION(BlueprintCallable)
    APodLandingPlatform* GetUsedLandingPlatform();
    
    UFUNCTION(BlueprintCallable)
    void FinishLandingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void EnableTriggerVolumes(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayLandingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLandingAnimationComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHostSaveDataReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHostSackboyExitedInputCollider(ASackboy* NetworkHostSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHostSackboyEnteredInputCollider(ASackboy* NetworkHostSackboy);
    

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
    
};

