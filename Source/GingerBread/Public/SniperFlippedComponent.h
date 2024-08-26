#pragma once
#include "CoreMinimal.h"
#include "AIFlippedComponent.h"
#include "SniperFlippedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USniperFlippedComponent : public UAIFlippedComponent {
    GENERATED_BODY()
public:
    USniperFlippedComponent(const FObjectInitializer& ObjectInitializer);

};

