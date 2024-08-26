#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "UnderminerActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUnderminerActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UUnderminerActionComponent(const FObjectInitializer& ObjectInitializer);

};

