#pragma once
#include "CoreMinimal.h"
#include "EDamageDetails.h"
#include "EDamageDirection.h"
#include "EDamageLevel.h"
#include "HitReactionDetailsMap.h"
#include "HitReactionDirectionMap.h"
#include "HitReactionTypeMap.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionTypeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageDirection, FHitReactionDirectionMap> DirectionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageDetails, FHitReactionDetailsMap> DetailsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageLevel, FName> LevelMap;
    
    GINGERBREAD_API FHitReactionTypeMap();
};

