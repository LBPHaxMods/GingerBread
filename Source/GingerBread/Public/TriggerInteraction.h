#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerInteraction.generated.h"

class UInteractionComponent;

UCLASS(Blueprintable, MinimalAPI)
class ATriggerInteraction : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
public:
    ATriggerInteraction(const FObjectInitializer& ObjectInitializer);

};

