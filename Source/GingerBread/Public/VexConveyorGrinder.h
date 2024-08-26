#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VexConveyorGrinder.generated.h"

UCLASS(Blueprintable)
class AVexConveyorGrinder : public AActor {
    GENERATED_BODY()
public:
    AVexConveyorGrinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRotSpeed(float NewRotSpeed);
    
};

