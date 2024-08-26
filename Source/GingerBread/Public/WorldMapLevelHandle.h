#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "WorldMapLevelHandle.generated.h"

USTRUCT(BlueprintType)
struct FWorldMapLevelHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType WorldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelID;
    
public:
    GINGERBREAD_API FWorldMapLevelHandle();
};

