#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ToniProcedural.generated.h"

UCLASS(Blueprintable)
class AToniProcedural : public AActor {
    GENERATED_BODY()
public:
    AToniProcedural(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool EnqueueConstructionScriptCall();
    
};

