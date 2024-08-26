#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeRageCrackingActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeRageCrackingActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeRageCrackingActivity();

private:
    UFUNCTION(BlueprintCallable)
    void MoveCompleted(EMamapedeMovementMode MovementMode);
    
};

