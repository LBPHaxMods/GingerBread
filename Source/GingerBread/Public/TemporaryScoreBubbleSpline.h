#pragma once
#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "ETempBubbleSplineState.h"
#include "HitPointsModifierTableRow.h"
#include "Templates/SubclassOf.h"
#include "TemporaryScoreBubbleSplineEventDelegate.h"
#include "TemporaryScoreBubbleSpline.generated.h"

class ASackboy;
class ATemporaryScoreBubble;
class UAkAudioEvent;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;
class UPickupContainerComponent;
class UPoIComponent;
class USplineComponent;
class USplineFollowerComponent;
class USpotShadowComponent;

UCLASS(Abstract, Blueprintable)
class ATemporaryScoreBubbleSpline : public ACollectableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemporaryScoreBubbleSplineEvent OnSpawnSequenceStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemporaryScoreBubbleSplineEvent OnSpawnSequenceEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemporaryScoreBubbleSplineEvent OnTimerExpired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemporaryScoreBubbleSplineEvent OnAllBubblesCollected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* PathSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoIComponent* PointOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkExpiringTimerSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AnimateOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkGamepadVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkGamepadAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAllBubbledCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EndOfSplineEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineFollowerComponent* SplineFollower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpiringEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailEffectTimeScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACollectableBase> SpawnedBubbleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointsModifierTableRow ContainerBreakDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AchievementForCollectingAllBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFixedSplineTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalRewardHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TrailHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TrailGamepadAudioEvent;
    
private:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ServerState, meta=(AllowPrivateAccess=true))
    ETempBubbleSplineState Server_State;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATemporaryScoreBubble>> Server_SpawnedScoreBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TriggeredTimeStamp, meta=(AllowPrivateAccess=true))
    float Server_TriggeredTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumBubblesCollected, meta=(AllowPrivateAccess=true))
    int32 Server_NumBubblesCollected;
    
public:
    ATemporaryScoreBubbleSpline(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TriggerExpiringEffects();
    
    UFUNCTION(BlueprintCallable)
    void TriggerBubbleOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SpawnNextBubble(int32 NextBubbleIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSplineFollowerEndReached(USplineFollowerComponent* TriggeredSplineFollower, bool bWasTravellingForward);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedBubblesLifespanExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedBubbleCollected(ACollectableBase* Collectable, ASackboy* CollectingSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TriggeredTimeStamp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumBubblesCollected();
    
public:
    UFUNCTION(BlueprintCallable)
    void EDITOR_SetupVariables(int32 NumBubbles, float Height, float Timespan, bool bFixedSplineTransform);
    
};

