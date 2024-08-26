#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ItemDataProperty.h"
#include "ItemDataProperty_Image.generated.h"

USTRUCT(BlueprintType)
struct FItemDataProperty_Image : public FItemDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    GINGERBREAD_API FItemDataProperty_Image();
};

