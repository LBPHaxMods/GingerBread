#pragma once
#include "CoreMinimal.h"
#include "DebugLevelData.h"
#include "DebugLevelDataCollection.generated.h"

USTRUCT(BlueprintType)
struct FDebugLevelDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugLevelData> LevelData;
    
    GINGERBREAD_API FDebugLevelDataCollection();
};

