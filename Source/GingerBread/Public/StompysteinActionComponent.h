#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "StompysteinActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompysteinActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UStompysteinActionComponent(const FObjectInitializer& ObjectInitializer);

};

