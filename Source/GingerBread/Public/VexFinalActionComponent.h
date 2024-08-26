#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "VexFinalActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVexFinalActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UVexFinalActionComponent(const FObjectInitializer& ObjectInitializer);

};

