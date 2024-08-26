#pragma once
#include "CoreMinimal.h"
#include "HudActor3D.h"
#include "3DUI_TrophyScore.generated.h"

class UChildActorComponent;
class UCurveFloat;
class UHudAmbientMovementComponent;
class UHudFishingLineComponent;
class UHudSkeletalMeshComponent;
class UHudStaticMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class A3DUI_TrophyScore : public AHudActor3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ObjectsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudAmbientMovementComponent* HudAmbientMovementScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudSkeletalMeshComponent* BaseTimerSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CenterParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CenterPlainBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* ScoreBGPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Score3DText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ScoreLossRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ScoreLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ScoreFallSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* ScoreBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* ScoreBubbleShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudFishingLineComponent* FishingLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudFishingLineComponent* FishingLine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudAmbientMovementComponent* HudAmbientMovementMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* MultiplierMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* MultiplierFishingLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MultiplierVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* MultiplierTimeCountdownFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* MultiplierTimeCountdownRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MultiplierParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* MultiplierMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* MultiplierJiggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishingLineLifeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishingLineLifeTarget2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MultiplierParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleDownEventCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LerpOnSplineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotationCurve;
    
    A3DUI_TrophyScore(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupHudActor();
    
    UFUNCTION(BlueprintCallable)
    void ScoreLossScaleOnFinished();
    
    UFUNCTION(BlueprintCallable)
    void ScoreLossScaleOffFinished();
    
    UFUNCTION(BlueprintCallable)
    void ScaleDownEvent_TimelineUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Rotation_TimelineUpdate(float Rotation);
    
    UFUNCTION(BlueprintCallable)
    void PlayScoreLoss(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void MultiplierOn();
    
    UFUNCTION(BlueprintCallable)
    void MultiplierOff();
    
    UFUNCTION(BlueprintCallable)
    void MultiplierIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void LerpOnSpline_TimelineUpdate(float LerpOnSpline);
    
    UFUNCTION(BlueprintCallable)
    void ImmediateShow();
    
    UFUNCTION(BlueprintCallable)
    void ImmediateHide();
    
    UFUNCTION(BlueprintCallable)
    void HideMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void Anim_Outro();
    
    UFUNCTION(BlueprintCallable)
    void Anim_Intro();
    
};

