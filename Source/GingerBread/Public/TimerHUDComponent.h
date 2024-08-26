#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUITimerCountType.h"
#include "EUITimerTier.h"
#include "GingerbreadHUDComponent.h"
#include "TimerHUDComponent.generated.h"

class A3DUI_TimerAdjustmentTime;
class UAkAudioEvent;
class UMaterialParameterCollection;
class UTimerHUDComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTimerHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTimerHUDComponentDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimerTierChanged, UTimerHUDComponent*, timerHUDBP, EUITimerTier, newTier);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHUDComponentDelegate OnTimerIntroFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHUDComponentDelegate OnTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHUDComponentDelegate OnTimerStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHUDComponentDelegate OnTimerReachedCentre;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHUDComponentDelegate OnFinishedToCenterAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHUDComponentDelegate OnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimerTierChanged OnTimerTierChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAdjustmentLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdjustmentActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnravelMeshUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlipAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PullUpAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEsportsLevel;
    
    UTimerHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(bool ticksSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerState(EUITimerCountType timerState);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerActorVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float Seconds, bool instant);
    
    UFUNCTION(BlueprintCallable)
    void SetTierTimesFromSeconds(float goldSeconds, float silverSeconds, float bronzeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTierTimes(FTimespan gold, FTimespan silver, FTimespan bronze);
    
    UFUNCTION(BlueprintCallable)
    void SetOutroPlayRate(float outroPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllInWorldWidgets();
    
    UFUNCTION(BlueprintCallable)
    void PostIntroAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayTimeAdjustment(float secondsAdjustment, FVector adjustmentSource);
    
    UFUNCTION(BlueprintCallable)
    void OnOffscreenReachedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnHalfSpinReached();
    
    UFUNCTION(BlueprintCallable)
    void OnCenterReachedEvent_Delay();
    
    UFUNCTION(BlueprintCallable)
    void OnCenterReachedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnAdjustmentActorLifetimeOver(A3DUI_TimerAdjustmentTime* adjustmentActor);
    
    UFUNCTION(BlueprintCallable)
    void IsTimerCounting(bool& isCounting);
    
    UFUNCTION(BlueprintCallable)
    void IsInIntroState(bool& inIntro);
    
    UFUNCTION(BlueprintCallable)
    void IsEnabled(bool& NewIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EndIntro();
    
    UFUNCTION(BlueprintCallable)
    void EnableTimerHud(bool playIntro);
    
    UFUNCTION(BlueprintCallable)
    void AnimateToCenter();
    
};

