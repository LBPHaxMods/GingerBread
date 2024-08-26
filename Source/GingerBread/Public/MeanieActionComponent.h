#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "MeanieActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMeanieActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UMeanieActionComponent(const FObjectInitializer& ObjectInitializer);

};

