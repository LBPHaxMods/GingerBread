#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollectableBase.h"
#include "EHealthCapsuleState.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "BaseHealthCapsule.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAttractionCollectableComponent;
class UCollectableHUDMoverComponent;
class UCollectableHeadSpinComponent;
class UCollectablePickupMoverComponent;
class UForceFeedbackEffect;
class UParticleSystem;
class URotatingMovementComponent;

UCLASS(Blueprintable)
class ABaseHealthCapsule : public ACollectableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableHUDMoverComponent* HUDMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectablePickupMoverComponent* PickupMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableHeadSpinComponent* HeadSpinMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RotatingMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttractionCollectableComponent* AttractionCollectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HUDAwardSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverheadBurstSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupGamepadAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HeartToHUDAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HeadCollectionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HeadCollectionVFX2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TrailVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* BeginCollectedRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* EndCollectedRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectedRumbleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BeginCollectedHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndCollectedHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBigLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreToAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HudMovementHeadSpinAlpha;
    
private:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EHealthCapsuleState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Sackboy, meta=(AllowPrivateAccess=true))
    ASackboy* Sackboy;
    
public:
    ABaseHealthCapsule(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSackboyDied(ASackboy* diedSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Sackboy();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnMoverComplete(UCollectablePickupMoverComponent* mover, FVector OrbLocation, FVector PreviousLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnHUDMovementComplete(UCollectableHUDMoverComponent* mover);
    
    UFUNCTION(BlueprintCallable)
    void OnHeadSpinComplete(UCollectableHeadSpinComponent* mover);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddNetworkedImpulse(FVector LaunchVelocity);
    
};

