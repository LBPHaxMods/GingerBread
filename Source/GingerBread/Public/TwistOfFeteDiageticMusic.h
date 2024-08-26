#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TwistOfFeteDiageticMusic.generated.h"

class ARhythmicTransitionCannon;
class UAkAudioEvent;

UCLASS(Abstract, Blueprintable)
class ATwistOfFeteDiageticMusic : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARhythmicTransitionCannon> RhythmicTransitionCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartDiageticMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FinishDiageticMusicEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UseDiageticMusic, meta=(AllowPrivateAccess=true))
    bool UseDiageticMusic;
    
public:
    ATwistOfFeteDiageticMusic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UseDiageticMusic();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_OnRhythmicTransitionCannonFired();
    
};

