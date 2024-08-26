#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "MinibossMeanieActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMinibossMeanieActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UMinibossMeanieActionComponent(const FObjectInitializer& ObjectInitializer);

};

