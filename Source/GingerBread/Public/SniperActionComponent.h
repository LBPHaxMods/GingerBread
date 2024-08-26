#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "SniperActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USniperActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    USniperActionComponent(const FObjectInitializer& ObjectInitializer);

};

