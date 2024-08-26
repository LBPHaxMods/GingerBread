#pragma once
#include "CoreMinimal.h"
#include "CostumeThumbnailImage.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCostumeThumbnailImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ImageData;
    
    GINGERBREAD_API FCostumeThumbnailImage();
};

