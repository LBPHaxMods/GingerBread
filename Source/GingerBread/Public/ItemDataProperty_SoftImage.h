#pragma once
#include "CoreMinimal.h"
#include "ItemDataProperty.h"
#include "ItemDataProperty_SoftImage.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemDataProperty_SoftImage : public FItemDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftImage;
    
    GINGERBREAD_API FItemDataProperty_SoftImage();
};

