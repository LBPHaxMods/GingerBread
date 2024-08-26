#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "GingerbreadWidgetElement.h"
#include "GingerbreadRichTextWidget_Text.generated.h"

class UFont;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadRichTextWidget_Text : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UGingerbreadRichTextWidget_Text();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Text_VisibilityChanged(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Text_SetWord(const FString& NewWord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Text_SetFont(UFont* Font, int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Text_SetColourAndOpacity(FSlateColor Colour);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSlateFontInfo Text_GetDefaultFontInfo();
    
};

