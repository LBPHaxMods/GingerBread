#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HudActor3D.h"
#include "3DUI_BonusTimer.generated.h"

class A3DUI_BonusTimerPartyPopper;
class UAkAudioEvent;
class UAkComponent;
class UChildActorComponent;
class UCurveFloat;
class UCurveVector;
class UHudSkeletalMeshComponent;
class UHudStaticMeshComponent;
class UParticleSystemComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class A3DUI_BonusTimer : public AHudActor3D {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimMovingToCentreDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_PopperVFX_UnlockPowerPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AK_bonus_room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RibbenVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* TimerRingShadowPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* IntroSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudSkeletalMeshComponent* TimerSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* TextChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PopperBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PopperBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CornerToCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* TimerFishingLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CentreDisc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* PinRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* PinLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* TimerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* OuterRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* InnerRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TimerRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreSecondSwapAnimTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimMovingToCentreDelegate OnAnimMovingToCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TimerEnterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TimerStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TimerStopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TimerToCentreAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PopperHideAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PopperAppearAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConfettiAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConfettiHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TimerStopHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CentreSpinCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* NumberLocationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* NumberPositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberScale2Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DiscWobbleCurve;
    
    A3DUI_BonusTimer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartEndSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetupHudActor();
    
    UFUNCTION(BlueprintCallable)
    void SetTimerState(float CurrentTime, float FractionalPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetPulsing(bool isPulsing, float TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void SetAnticipatingPoppers(bool isAnticipating);
    
    UFUNCTION(BlueprintCallable)
    void OnPopperPopped_Delay();
    
    UFUNCTION(BlueprintCallable)
    void OnPopperPopped(A3DUI_BonusTimerPartyPopper* finishedPopper);
    
    UFUNCTION(BlueprintCallable)
    void OnPopperFinished(A3DUI_BonusTimerPartyPopper* finishedPopper);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveToCentreStart();
    
    UFUNCTION(BlueprintCallable)
    void OnHudComponentTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCentreReached_Delay();
    
    UFUNCTION(BlueprintCallable)
    void OnCentreReached();
    
    UFUNCTION(BlueprintCallable)
    void NumberScaleCurve_Update(float NumberScale);
    
    UFUNCTION(BlueprintCallable)
    void NumberLocationCurve_Update(FVector NumberLocation);
    
    UFUNCTION(BlueprintCallable)
    void GetTimerToMoveToCentre(float& Duration);
    
    UFUNCTION(BlueprintCallable)
    void GetPopperIntroLength(float& Length);
    
    UFUNCTION(BlueprintCallable)
    void DiscWobbleCurve_Update(float discWobble);
    
    UFUNCTION(BlueprintCallable)
    void CentreSpinCurve_Update(FVector CentreSpin);
    
    UFUNCTION(BlueprintCallable)
    void ActivateTimer(float initialTime, float ringFractionalPercent);
    
};

