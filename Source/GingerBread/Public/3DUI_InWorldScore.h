#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "3DUI_InWorldScore.generated.h"

class UChildActorComponent;
class UCurveFloat;
class UCurveVector;
class UHudRootSceneComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class A3DUI_InWorldScore : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResetScoreEventDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MultiplierVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GlowOffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudRootSceneComponent* HudRootScene;
    
public:
    A3DUI_InWorldScore(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TimelineFinished();
    
    UFUNCTION(BlueprintCallable)
    void Scale_TimelineUpdate(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void Rotation_TimelineUpdate(FVector Rotation);
    
    UFUNCTION(BlueprintCallable)
    void GlowOff_TimelineUpdate();
    
};

