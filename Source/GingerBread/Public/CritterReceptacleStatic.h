#pragma once
#include "CoreMinimal.h"
#include "CritterReceptacle.h"
#include "CritterReceptacleStatic.generated.h"

UCLASS(Abstract, Blueprintable)
class ACritterReceptacleStatic : public ACritterReceptacle {
    GENERATED_BODY()
public:
    ACritterReceptacleStatic(const FObjectInitializer& ObjectInitializer);

};

