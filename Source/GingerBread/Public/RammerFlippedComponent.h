#pragma once
#include "CoreMinimal.h"
#include "AIFlippedComponent.h"
#include "RammerFlippedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URammerFlippedComponent : public UAIFlippedComponent {
    GENERATED_BODY()
public:
    URammerFlippedComponent(const FObjectInitializer& ObjectInitializer);

};

