#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "3DUI_TimerAdjustmentTime.generated.h"

class A3DUI_TimerAdjustmentTime;
class UChildActorComponent;
class UCurveFloat;
class UCurveVector;
class UHudRootSceneComponent;

UCLASS(Blueprintable)
class A3DUI_TimerAdjustmentTime : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLifetimeOverDelegate, A3DUI_TimerAdjustmentTime*, adjustmentActor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* NumberTextChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLifetimeOverDelegate OnLifetimeOver;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudRootSceneComponent* HudRootScene;
    
public:
    A3DUI_TimerAdjustmentTime(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TimelineFinished();
    
    UFUNCTION(BlueprintCallable)
    void Scale_TimelineUpdate(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void Rotation_TimelineUpdate(FVector Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ReclaimActor();
    
    UFUNCTION(BlueprintCallable)
    void PlayTimeAdjustmentEvent(float Time, FVector WorldLocation);
    
};

