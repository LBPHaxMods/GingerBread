#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeGroundDiveActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeGroundDiveActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeGroundDiveActivity();

private:
    UFUNCTION(BlueprintCallable)
    void OnStartedEnteringGround();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementComplete(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedExitingGround();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedEnteringGround();
    
};

