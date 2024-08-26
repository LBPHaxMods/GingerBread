#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeFollowSplineActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeFollowSplineActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeFollowSplineActivity();

private:
    UFUNCTION(BlueprintCallable)
    void OnTailExitedGround();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementComplete(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMainMovementStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnHeadReEnterGround();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedExitingGround();
    
    UFUNCTION(BlueprintCallable)
    void OnDivingStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void DiveEarly();
    
};

