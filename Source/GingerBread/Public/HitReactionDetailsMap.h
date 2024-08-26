#pragma once
#include "CoreMinimal.h"
#include "EDamageLevel.h"
#include "HitReactionDetailsMap.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionDetailsMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageLevel, FName> LevelMap;
    
    GINGERBREAD_API FHitReactionDetailsMap();
};

