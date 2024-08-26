#pragma once
#include "CoreMinimal.h"
#include "NotificationWidgetBase.h"
#include "MultiSelectNotificationWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMultiSelectNotificationWidget : public UNotificationWidgetBase {
    GENERATED_BODY()
public:
    UMultiSelectNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOption3(bool bShow, const FText& Text, UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOption2(bool bShow, const FText& Text, UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOption1(bool bShow, const FText& Text, UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionSelect(int32 Option);
    
};

