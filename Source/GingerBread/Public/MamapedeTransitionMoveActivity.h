#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeTransitionMoveActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeTransitionMoveActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeTransitionMoveActivity();

    UFUNCTION(BlueprintCallable)
    void StartHideMovement();
    
    UFUNCTION(BlueprintCallable)
    void SmoothMoveHideCompleted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SmoothMoveCompleted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void MovementCompleted(EMamapedeMovementMode MovementMode);
    
};

