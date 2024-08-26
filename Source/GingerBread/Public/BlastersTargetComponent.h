#pragma once
#include "CoreMinimal.h"
#include "TargetableComponent.h"
#include "BlastersTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UBlastersTargetComponent : public UTargetableComponent {
    GENERATED_BODY()
public:
    UBlastersTargetComponent(const FObjectInitializer& ObjectInitializer);

};

