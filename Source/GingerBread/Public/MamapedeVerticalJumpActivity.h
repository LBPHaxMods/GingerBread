#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeVerticalJumpActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeVerticalJumpActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeVerticalJumpActivity();

private:
    UFUNCTION(BlueprintCallable)
    void TriggerShockwave();
    
    UFUNCTION(BlueprintCallable)
    void OnSignpostStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSignpostComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnRetractIntoGroundStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnReEnterGroundLate();
    
    UFUNCTION(BlueprintCallable)
    void OnReEnterGroundEarly();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementCompleted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMainJumpStarted();
    
};

