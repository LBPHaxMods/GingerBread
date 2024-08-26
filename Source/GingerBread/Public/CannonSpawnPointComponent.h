#pragma once
#include "CoreMinimal.h"
#include "SpawnPointComponent.h"
#include "CannonSpawnPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCannonSpawnPointComponent : public USpawnPointComponent {
    GENERATED_BODY()
public:
    UCannonSpawnPointComponent(const FObjectInitializer& ObjectInitializer);

};

