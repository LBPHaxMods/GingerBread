#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelObjectStatCounter.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API ALevelObjectStatCounter : public AActor {
    GENERATED_BODY()
public:
    ALevelObjectStatCounter(const FObjectInitializer& ObjectInitializer);

};

