#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHitPointFilterDirection.h"
#include "HitPointPriorityFilterData.generated.h"

USTRUCT(BlueprintType)
struct FHitPointPriorityFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitPointFilterDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionAngleFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerpendicularAngleFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    GINGERBREAD_API FHitPointPriorityFilterData();
};

