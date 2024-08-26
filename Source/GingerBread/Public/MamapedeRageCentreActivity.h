#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeRageCentreActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeRageCentreActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeRageCentreActivity();

private:
    UFUNCTION(BlueprintCallable)
    void OnReEnterGround();
    
    UFUNCTION(BlueprintCallable)
    void OnPopStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementFinished(EMamapedeMovementMode MovementMode);
    
};

