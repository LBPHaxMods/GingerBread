#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "MamapedeActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMamapedeActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UMamapedeActionComponent(const FObjectInitializer& ObjectInitializer);

};

