#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "SpaceHamsterActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpaceHamsterActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    USpaceHamsterActionComponent(const FObjectInitializer& ObjectInitializer);

};

