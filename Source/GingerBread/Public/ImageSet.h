#pragma once
#include "CoreMinimal.h"
#include "ImageData.h"
#include "ImageSet.generated.h"

USTRUCT(BlueprintType)
struct FImageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FImageData> Data;
    
    GINGERBREAD_API FImageSet();
};

