#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CutsceneTriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCutsceneTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCutsceneTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerStartCutscene();
    
};

