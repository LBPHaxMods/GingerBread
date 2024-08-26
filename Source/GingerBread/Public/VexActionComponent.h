#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "VexActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVexActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UVexActionComponent(const FObjectInitializer& ObjectInitializer);

};

