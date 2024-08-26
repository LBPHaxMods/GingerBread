#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "GruntyActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGruntyActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UGruntyActionComponent(const FObjectInitializer& ObjectInitializer);

};

