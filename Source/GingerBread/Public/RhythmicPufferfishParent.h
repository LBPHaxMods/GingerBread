#pragma once

#include "CoreMinimal.h"
#include "ERhythmicPufferfishAnimationMode.h"
#include "RhythmicBeatReceiver.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "RhythmicPufferfishParent.generated.h"

class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class ARhythmicPufferfishParent : public APlayerCountActor, public IWakeSleep, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERhythmicPufferfishAnimationMode AnimationMode;
    
public:
    ARhythmicPufferfishParent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReturnToIdle();
    

    // Fix for true pure virtual functions not being implemented
};

