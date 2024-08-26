#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControlSchemeExperimentManager.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class AControlSchemeExperimentManager : public AActor {
    GENERATED_BODY()
public:
    AControlSchemeExperimentManager(const FObjectInitializer& ObjectInitializer);

};

