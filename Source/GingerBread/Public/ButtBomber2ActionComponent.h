#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "ButtBomber2ActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UButtBomber2ActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UButtBomber2ActionComponent(const FObjectInitializer& ObjectInitializer);

};

