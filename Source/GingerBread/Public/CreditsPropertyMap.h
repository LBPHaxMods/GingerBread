#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "CreditsPropertyMap.generated.h"

class UImage;
class USpacer;
class UTextBlock;

UCLASS(Blueprintable, MinimalAPI)
class UCreditsPropertyMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> SpacerScreenPercentages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTextBlockStyle> TextStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSlateBrush> ImageBrushes;
    
    UCreditsPropertyMap();

    UFUNCTION(BlueprintCallable)
    void SetTextStyleFromProperty(UTextBlock* TextBlock, FName Property);
    
    UFUNCTION(BlueprintCallable)
    void SetSpacerFromProperty(USpacer* Spacer, FName Property, float CreditsHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetImageFromProperty(UImage* Image, FName Property);
    
};

