#pragma once
#include "CoreMinimal.h"
#include "EUIMemoryOrbTotalAnimState.h"
#include "GingerbreadHUDComponent.h"
#include "MemoryOrbTotalHudComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMemoryOrbTotalHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIOrbTotalToggled, bool, IsOpen);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIOrbTotalCountBasicEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIOrbTotalCountBasicEvent OnFinishedIncrementing;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIOrbTotalCountBasicEvent OnFinishedFlourish;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIOrbTotalToggled OnFinishToggle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberOfOrbsSizeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberOfOrbsCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberOfOrbsLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfOrbsAtLastTurnOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfOrbsAtLastIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentNumberOfOrbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNumberOfOrbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeWaitedForCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMemoryOrbTotalAnimState AnimState;
    
public:
    UMemoryOrbTotalHudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTotalOrbCount(bool instant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNumberOfOrbs(int32 NumberOfOrbs, bool AnimateToNewAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PerformFlourish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsCountPerformingAction(bool& IsPerformingAnAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsCountIncrementing(bool& IsIncrementing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsCountFlourishing(bool& IsFlourishing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTotalOrbCount(bool instant);
    
};

