#pragma once
#include "CoreMinimal.h"
#include "EScreenTransitionState.h"
#include "EScreentransitionTypes.h"
#include "GingerbreadHUDComponent.h"
#include "ScreenTransitionEventDelegate.h"
#include "ScreenTransitionsHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UScreenTransitionsHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenTransitionEvent TransitionOnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenTransitionEvent TransitionOffFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenTransitionState mScreenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreentransitionTypes mCurrentType;
    
public:
    UScreenTransitionsHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScreenTransitionState(const bool bOn, const EScreentransitionTypes TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenTranstionsOn(float Time, EScreentransitionTypes Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenTranstionsOff(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitioning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EScreentransitionTypes GetRandomType();
    
};

