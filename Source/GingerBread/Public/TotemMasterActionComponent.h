#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "TotemMasterActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTotemMasterActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UTotemMasterActionComponent(const FObjectInitializer& ObjectInitializer);

};

