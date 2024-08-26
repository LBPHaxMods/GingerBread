#pragma once
#include "CoreMinimal.h"
#include "EDamageLevel.h"
#include "EDamageType.h"
#include "HitReactionTypeMap.h"
#include "HitReactionSourceMap.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionSourceMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageType, FHitReactionTypeMap> TypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageLevel, FName> LevelDefaults;
    
    GINGERBREAD_API FHitReactionSourceMap();
};

