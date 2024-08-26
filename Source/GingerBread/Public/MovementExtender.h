#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementExtender.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovementExtender : public UActorComponent {
    GENERATED_BODY()
public:
    UMovementExtender(const FObjectInitializer& ObjectInitializer);

};

