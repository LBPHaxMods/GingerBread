#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUITimerTier.h"
#include "HudActor3D.h"
#include "3DUI_Timer.generated.h"

class A3DUI_TimerAdjustmentTime;
class AActor;
class UAkAudioEvent;
class UChildActorComponent;
class UCurveFloat;
class UCurveVector;
class UGingerbreadWidget;
class UHudAmbientMovementComponent;
class UHudSkeletalMeshComponent;
class UHudStaticMeshComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class A3DUI_Timer : public AHudActor3D {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOffscreenReachedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMiddleReachedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIntroFinishedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHalfCenterSpinDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCornerReachedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ObjectsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CornerToCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CentreToOffscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* TextOffScreenSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BannerChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* IntroToCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudAmbientMovementComponent* HudAmbientMovementTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudSkeletalMeshComponent* BaseTimerSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* BaseCardboardRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* BronzeRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* BronzeUnraveler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BronzeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* SilverRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* SilverUnraveler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SilverParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* GoldRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* GoldUnraveler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* GoldParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* BaseCardboardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* BronzeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* SilverButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* GoldButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* TimerFishingLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* PinLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* PinRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* TimerRingShadowPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CenterParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CenterThumbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CenterBronze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CenterSilver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CenterGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CenterPlainBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* ShadowPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* EsportsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* EsportsTimerFishingLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudAmbientMovementComponent* HudAmbientMovementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BP_3DUI_TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AdjustmentChildActor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AdjustmentChildActor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AdjustmentChildActor3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AdjustmentChildActor4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AdjustmentChildActor5;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHalfCenterSpinDelegate OnHalfCenterSpin;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIntroFinishedDelegate OnIntroFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMiddleReachedDelegate OnMiddleReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCornerReachedDelegate OnCornerReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOffscreenReachedDelegate OnOffscreenReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<A3DUI_TimerAdjustmentTime*> AdjustmentTimeActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidget* IntroWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartLevelAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndCornerToCentreAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndCentreToRiseAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartCentreToCornerAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceGateStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpotlightTimeOffsetAddAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpotlightTimeOffsetNegAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BannerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ButtonRelativeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TimerRelativeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FlashAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PositiveTimeOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* NegativeTimeOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OnHalfTurnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LeftPinXMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RightPinXMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CenterRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PositiveOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CenterSwapCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DropInOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CenterRotationCurve2;
    
    A3DUI_Timer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TimerRelativeCurve_Update(FVector TimerRelative);
    
    UFUNCTION(BlueprintCallable)
    void Text_PlayTimeStopped();
    
    UFUNCTION(BlueprintCallable)
    void Text_PlayTimeStarted();
    
    UFUNCTION(BlueprintCallable)
    void Text_PlayTimeLost();
    
    UFUNCTION(BlueprintCallable)
    void Text_PlayTimeAdded();
    
    UFUNCTION(BlueprintCallable)
    void SetupHudActor();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeText(FTimespan Time);
    
    UFUNCTION(BlueprintCallable)
    void SetOutroPlayRate(float outroPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void RotationCurves_Update(FVector NewRotationCurves);
    
    UFUNCTION(BlueprintCallable)
    void RightPinXMovement_Update(float RightPinXMovement);
    
    UFUNCTION(BlueprintCallable)
    void PositiveTimeOffset_Update(FVector PositiveTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    void PositiveOffset_Update(FVector positiveOffset);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerOutroStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnTimerIntroStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnOffscreenCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntroWidgetReady(UGingerbreadWidget* timerIntroWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroEndStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnHalfTurn_Update();
    
    UFUNCTION(BlueprintCallable)
    void OnCornerMoveStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCornerCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnCentreCallback();
    
    UFUNCTION(BlueprintCallable)
    void NegativeTimeOffset_Update(FVector NegativeTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    void LeftPinXMovement_Update(float LeftPinXMovement);
    
    UFUNCTION(BlueprintCallable)
    void IsWholeSpinPlaying(bool& IsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IntroWidgetOutroStopAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IntroWidgetOutroPlayAnimation();
    
    UFUNCTION(BlueprintCallable)
    void GetTierRingPrimitives(EUITimerTier tier, TArray<UPrimitiveComponent*>& tierPrimitives);
    
    UFUNCTION(BlueprintCallable)
    void FlashTimePositive();
    
    UFUNCTION(BlueprintCallable)
    void FlashTimeNegative();
    
    UFUNCTION(BlueprintCallable)
    void FlashTime_Finish();
    
    UFUNCTION(BlueprintCallable)
    void FlashAlpha_Update(float flashAlpha);
    
    UFUNCTION(BlueprintCallable)
    void EndIntro();
    
    UFUNCTION(BlueprintCallable)
    void EnableTimer(bool playIntro);
    
    UFUNCTION(BlueprintCallable)
    void DropInOffset_Update(float DropInOffset);
    
    UFUNCTION(BlueprintCallable)
    void CenterSwap_Update();
    
    UFUNCTION(BlueprintCallable)
    void CenterRotation_Update(FVector CenterRotation);
    
    UFUNCTION(BlueprintCallable)
    void CenterRotation2_Update(FVector CenterRotation);
    
    UFUNCTION(BlueprintCallable)
    void ButtonRelativeCurve_Update(FVector ButtonRelative);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BannerActorSetClip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BannerActorPlay();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayWholeSpin();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayClick();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayCenterSpin();
    
    UFUNCTION(BlueprintCallable)
    void Anim_DropInToCorner();
    
    UFUNCTION(BlueprintCallable)
    void Anim_CornerToCentre();
    
    UFUNCTION(BlueprintCallable)
    void Anim_CentreToOffscreen();
    
    UFUNCTION(BlueprintCallable)
    void Anim_CentreToCorner();
    
};

