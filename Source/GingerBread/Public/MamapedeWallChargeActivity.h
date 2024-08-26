#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeWallChargeActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeWallChargeActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeWallChargeActivity();

    UFUNCTION(BlueprintCallable)
    void SkipPostCharge();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerWallDestruction();
    
    UFUNCTION(BlueprintCallable)
    void OnStartMovement(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnStartMainCharge();
    
    UFUNCTION(BlueprintCallable)
    void OnStartedEnteringWall();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMovement(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedExitingWall();
    
};

