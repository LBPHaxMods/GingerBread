#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeRageHeadPopActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeRageHeadPopActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeRageHeadPopActivity();

private:
    UFUNCTION(BlueprintCallable)
    void TriggerShockwave();
    
    UFUNCTION(BlueprintCallable)
    void OnReEnterGround();
    
    UFUNCTION(BlueprintCallable)
    void OnPopStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementComplete(EMamapedeMovementMode MovementMode);
    
};

