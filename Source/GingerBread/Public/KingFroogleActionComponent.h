#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "KingFroogleActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKingFroogleActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UKingFroogleActionComponent(const FObjectInitializer& ObjectInitializer);

};

