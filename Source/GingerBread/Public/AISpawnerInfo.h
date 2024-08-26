#pragma once
#include "CoreMinimal.h"
#include "EWorldLocation.h"
#include "Templates/SubclassOf.h"
#include "AISpawnerInfo.generated.h"

class AAISpawner;

USTRUCT(BlueprintType)
struct FAISpawnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAISpawner> Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation WorldLocation;
    
    GINGERBREAD_API FAISpawnerInfo();
};

