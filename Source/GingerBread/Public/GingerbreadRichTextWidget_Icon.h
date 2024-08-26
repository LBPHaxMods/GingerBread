#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "GingerbreadRichTextWidget_Icon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadRichTextWidget_Icon : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UGingerbreadRichTextWidget_Icon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Icon_VisibilityChanged(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Icon_SetTexture(UTexture2D* NewIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Icon_SetScale(float Scale);
    
};

