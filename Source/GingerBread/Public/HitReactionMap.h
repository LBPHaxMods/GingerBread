#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.h"
#include "HitReactionSourceMap.h"
#include "HitReactionMap.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageSource, FHitReactionSourceMap> SourceMap;
    
    GINGERBREAD_API FHitReactionMap();
};

