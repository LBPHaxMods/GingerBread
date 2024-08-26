#pragma once
#include "CoreMinimal.h"
#include "GBLimbStretcherSegmentBoneData.h"
#include "GBLimbStretcherBoneData.generated.h"

USTRUCT(BlueprintType)
struct FGBLimbStretcherBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGBLimbStretcherSegmentBoneData Whole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGBLimbStretcherSegmentBoneData Upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGBLimbStretcherSegmentBoneData Lower;
    
    GINGERBREAD_API FGBLimbStretcherBoneData();
};

