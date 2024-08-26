#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "TestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERSHADERS_API UTestComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UTestComponent(const FObjectInitializer& ObjectInitializer);

};

