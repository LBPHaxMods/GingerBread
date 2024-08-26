#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "HudActorComponentInterpolatedDelegate.h"
#include "HudActorInterpolatedCallback.h"
#include "ViewportChanged.h"
#include "HudActor3D.generated.h"

class UHudRootSceneComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class AHudActor3D : public AActor, public IViewportChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudActorComponentInterpolated OnComponentInterpolationFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHiddenByScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHiddenByGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VariableAspectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudRootSceneComponent* HUDRoot;
    
public:
    AHudActor3D(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopInterpolation(USceneComponent* ComponentInterpolating);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationMultiplier(USceneComponent* MovingComponent, float NewMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreTimeDilation(bool NewIgnoreDilation);
    
    UFUNCTION(BlueprintCallable)
    void RequestAmbientMovementComponentsRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewportChangedBP(int32 Width, int32 Height, float aspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void MoveComponentOntoSpline(USceneComponent* ComponentToMove, USplineComponent* SplineComponent, float FractionalPercent, bool ApplyRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHiddenCustom();
    
    UFUNCTION(BlueprintCallable)
    void InterpolateComponentTransform(USceneComponent* ComponentToInterpolate, const FTransform& DestinationTransform, float Time, TEnumAsByte<EEasingFunc::Type> EasingType, FHudActorInterpolatedCallback FinishedCallback);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateComponentToComponent(USceneComponent* ComponentToInterpolate, USceneComponent* TargetComponent, float Time, TEnumAsByte<EEasingFunc::Type> EasingType, FHudActorInterpolatedCallback FinishedCallback);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateComponentAlongSpline(USceneComponent* ComponentToInterpolate, USplineComponent* SplineComponent, bool Reverse, bool ApplyRotation, TEnumAsByte<EEasingFunc::Type> EasingType, FHudActorInterpolatedCallback FinishedCallback);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetRelativeTransformToComponent(USceneComponent* component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIgnoreTimeDilation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredWorldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVisibility(bool NewVisibility);
    

    // Fix for true pure virtual functions not being implemented
};

