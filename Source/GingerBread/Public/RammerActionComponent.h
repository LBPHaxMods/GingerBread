#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "RammerActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URammerActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    URammerActionComponent(const FObjectInitializer& ObjectInitializer);

};

