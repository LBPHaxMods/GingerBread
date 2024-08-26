#pragma once
#include "CoreMinimal.h"
#include "EMamapedeMovementMode.h"
#include "MamapedeActivity.h"
#include "MamapedeBurrowActivity.generated.h"

class AActor;

UCLASS(Blueprintable)
class UMamapedeBurrowActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
    UMamapedeBurrowActivity();

    UFUNCTION(BlueprintCallable)
    void StopChasing();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSmoothMoveDestinationReached(EMamapedeMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagedApplied(AActor* DamagedActor);
    
};

