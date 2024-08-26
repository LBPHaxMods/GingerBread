#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "PopshotActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPopshotActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UPopshotActionComponent(const FObjectInitializer& ObjectInitializer);

};

