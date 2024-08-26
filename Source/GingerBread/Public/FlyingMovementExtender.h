#pragma once
#include "CoreMinimal.h"
#include "MovementExtender.h"
#include "FlyingMovementExtender.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFlyingMovementExtender : public UMovementExtender {
    GENERATED_BODY()
public:
    UFlyingMovementExtender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PhysWalking(float DeltaTime);
    
};

