#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateColor.h"
#include "ActionType.h"
#include "ESackboyActions.h"
#include "SpecialCharacterData.h"
#include "RichTextFormats.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class URichTextFormats : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> InlineIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSlateColor> FontColours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ESackboyActions> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionType> Grab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionType> Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialCharacterData> SpecialCharacterList;
    
    URichTextFormats();

};

