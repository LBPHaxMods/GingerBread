#pragma once
#include "CoreMinimal.h"
#include "ETemporaryScoreBubbleState.h"
#include "ScoreBubble.h"
#include "TemporaryScoreBubble.generated.h"

class ACollectableBase;
class ASackboy;
class ATemporaryScoreBubbleSpline;
class UAkAudioEvent;
class UCurveFloat;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, Transient)
class ATemporaryScoreBubble : public AScoreBubble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkSpawnSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PopInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkTimedOutSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TimedOutVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PopOutCurve;
    
private:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ServerState, meta=(AllowPrivateAccess=true))
    ETemporaryScoreBubbleState Server_State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Server_SpawnedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningSpline, meta=(AllowPrivateAccess=true))
    ATemporaryScoreBubbleSpline* OwningSpline;
    
public:
    ATemporaryScoreBubble(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnWakeSleepChanged(bool bIsWake);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectedEvent(ACollectableBase* Collectable, ASackboy* CollectingSackboy);
    
};

