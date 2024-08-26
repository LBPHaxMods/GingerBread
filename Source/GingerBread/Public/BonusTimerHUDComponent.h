#pragma once
#include "CoreMinimal.h"
#include "BonusTimerEndSequenceFinishedDelegate.h"
#include "EUITimerCountType.h"
#include "GingerbreadHUDComponent.h"
#include "BonusTimerHUDComponent.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBonusTimerHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusTimerEndSequenceFinished EndSequenceFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* BlurSequence;
    
    UBonusTimerHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartEndSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSequenceToCentre_Delay();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSequenceToCentre();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBonusTimer(float CurrentTime, float totalTime, EUITimerCountType updateType);
    
};

