#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "StompnadoActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompnadoActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UStompnadoActionComponent(const FObjectInitializer& ObjectInitializer);

};

