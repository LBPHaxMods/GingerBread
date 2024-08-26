#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurfaceDeformationComponentTicker.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API ASurfaceDeformationComponentTicker : public AActor {
    GENERATED_BODY()
public:
    ASurfaceDeformationComponentTicker(const FObjectInitializer& ObjectInitializer);

};

