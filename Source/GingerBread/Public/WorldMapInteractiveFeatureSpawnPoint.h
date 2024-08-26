#pragma once
#include "CoreMinimal.h"
#include "SpawnPointComponent.h"
#include "WorldMapInteractiveFeatureSpawnPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UWorldMapInteractiveFeatureSpawnPoint : public USpawnPointComponent {
    GENERATED_BODY()
public:
    UWorldMapInteractiveFeatureSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

