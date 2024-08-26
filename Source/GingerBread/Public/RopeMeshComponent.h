#pragma once
#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "RopeMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API URopeMeshComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    URopeMeshComponent(const FObjectInitializer& ObjectInitializer);

};

