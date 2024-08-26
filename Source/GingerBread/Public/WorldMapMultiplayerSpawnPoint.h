#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPointComponent.h"
#include "WorldMapMultiplayerSpawnPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UWorldMapMultiplayerSpawnPoint : public USpawnPointComponent {
    GENERATED_BODY()
public:
    UWorldMapMultiplayerSpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetSplineTransform(const int32 splineIndex, const FTransform& SplineTransform);
    
};

