#pragma once
#include "CoreMinimal.h"
#include "ItemDataProperty_Image.h"
#include "ItemDataProperty_SoftImage.h"
#include "ItemDataProperty_Text.h"
#include "ItemDataProperty_Visiblity.h"
#include "WidgetListItemData.generated.h"

USTRUCT(BlueprintType)
struct FWidgetListItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDataProperty_Image> Images;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDataProperty_SoftImage> SoftImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDataProperty_Text> Texts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDataProperty_Visiblity> Visibilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemRenderAngle;
    
    GINGERBREAD_API FWidgetListItemData();
};

