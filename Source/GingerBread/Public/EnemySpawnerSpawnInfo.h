#pragma once
#include "CoreMinimal.h"
#include "EAISpawnState.h"
#include "EEnemyLevelType.h"
#include "EWorldLocation.h"
#include "Templates/SubclassOf.h"
#include "EnemySpawnerSpawnInfo.generated.h"

class AAIPatrolBase;
class AAISpawner;

USTRUCT(BlueprintType)
struct FEnemySpawnerSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAISpawner> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPatrolBase* Patrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyLevelType LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpawnState SpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShieldStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfGruntysInStack;
    
    GINGERBREAD_API FEnemySpawnerSpawnInfo();
};

