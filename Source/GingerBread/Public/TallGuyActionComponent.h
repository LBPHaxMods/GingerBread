#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "TallGuyActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTallGuyActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UTallGuyActionComponent(const FObjectInitializer& ObjectInitializer);

};

