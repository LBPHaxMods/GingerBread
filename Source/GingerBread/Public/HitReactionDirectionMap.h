#pragma once
#include "CoreMinimal.h"
#include "EDamageLevel.h"
#include "HitReactionDirectionMap.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionDirectionMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageLevel, FName> LevelMap;
    
    GINGERBREAD_API FHitReactionDirectionMap();
};

