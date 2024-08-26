#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeJumpFromWallActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeJumpFromWallActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeJumpFromWallActivity();

private:
    UFUNCTION(BlueprintCallable)
    void OnWowMomentTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnWooshTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnSignpostStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementCompleted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterGroundEarly();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterGround();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraReturnTriggered();
    
};

