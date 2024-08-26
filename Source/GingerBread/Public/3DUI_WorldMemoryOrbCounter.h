#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HudActor3D.h"
#include "3DUI_WorldMemoryOrbCounter.generated.h"

class A3DUI_MemoryOrb;
class UAkAudioEvent;
class UAkComponent;
class UAnimMontage;
class UChildActorComponent;
class UGingerbreadWidgetComponent;
class UHudAmbientMovementComponent;
class UHudFishingLineComponent;
class UHudSkeletalMeshComponent;
class UHudStaticMeshComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class A3DUI_WorldMemoryOrbCounter : public AHudActor3D {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovedToCornerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovedToCentreDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExitUpFinishedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDropInFinishedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropInFinishedDelegate OnDropInFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExitUpFinishedDelegate OnExitUpFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovedToCornerDelegate OnMovedToCorner;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovedToCentreDelegate OnMovedToCentre;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitialPositionCentred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    A3DUI_MemoryOrb* OrbChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DropInMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MoveLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ExitUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactionCentreMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactionLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactionRightMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloudDropEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloudAwayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MoveToCornerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SplineFollower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudAmbientMovementComponent* HudAmbientMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudSkeletalMeshComponent* OrbSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CloudStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Orb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetComponent* OrbTotalWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudFishingLineComponent* FishingLine1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudFishingLineComponent* FishingLine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishingLineTarget1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishingLineTarget2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    A3DUI_WorldMemoryOrbCounter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopActiveMontage();
    
    UFUNCTION(BlueprintCallable)
    void SetupHudActor();
    
    UFUNCTION(BlueprintCallable)
    void SetIsCentered(bool centered, bool instant);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveToCornerBlendOut(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnExitUpBlendOut(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnCloudMovementFinished();
    
    UFUNCTION()
    void OnAnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    bool IsInCorner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitialiseWidget();
    
    UFUNCTION(BlueprintCallable)
    FVector GetOrbSocketPosition();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayMoveToCorner();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayIdle();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactRight();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactLeft();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactCentre();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayExitUp();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayDropIn();
    
};

