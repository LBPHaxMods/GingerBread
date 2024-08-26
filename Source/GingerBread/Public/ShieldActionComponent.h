#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "ShieldActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShieldActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UShieldActionComponent(const FObjectInitializer& ObjectInitializer);

};

