#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "NaomiActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNaomiActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UNaomiActionComponent(const FObjectInitializer& ObjectInitializer);

};

