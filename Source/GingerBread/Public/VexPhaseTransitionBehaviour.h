#pragma once
#include "CoreMinimal.h"
#include "VexBehaviour.h"
#include "VexPhaseTransitionBehaviour.generated.h"

UCLASS(Blueprintable)
class UVexPhaseTransitionBehaviour : public UVexBehaviour {
    GENERATED_BODY()
public:
    UVexPhaseTransitionBehaviour();

    UFUNCTION(BlueprintCallable)
    void RemoveProjectiles();
    
};

