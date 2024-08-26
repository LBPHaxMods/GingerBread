#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnerSpawnInfo.h"
#include "WeightedEnemySpawnerSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FWeightedEnemySpawnerSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnerSpawnInfo SpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeighting;
    
    GINGERBREAD_API FWeightedEnemySpawnerSpawnInfo();
};

