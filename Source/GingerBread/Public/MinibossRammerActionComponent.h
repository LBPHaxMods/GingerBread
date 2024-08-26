#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "MinibossRammerActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMinibossRammerActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UMinibossRammerActionComponent(const FObjectInitializer& ObjectInitializer);

};

