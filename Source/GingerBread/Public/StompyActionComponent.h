#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "StompyActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompyActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UStompyActionComponent(const FObjectInitializer& ObjectInitializer);

};

