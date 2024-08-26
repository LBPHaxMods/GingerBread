#pragma once
#include "CoreMinimal.h"
#include "CostumeThumbnailImage.h"
#include "EquippedCostumeData.h"
#include "CostumeThumbnails.generated.h"

USTRUCT(BlueprintType)
struct FCostumeThumbnails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCostumeThumbnailImage> CostumeThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquippedCostumeData ThumbnailID;
    
    GINGERBREAD_API FCostumeThumbnails();
};

