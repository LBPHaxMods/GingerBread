#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "ButtBomberActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UButtBomberActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UButtBomberActionComponent(const FObjectInitializer& ObjectInitializer);

};

