#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AINavTargetHandlerComponent.generated.h"

class AAINavTarget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAINavTargetHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAINavTargetHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AAINavTarget* GetNavTarget();
    
};

