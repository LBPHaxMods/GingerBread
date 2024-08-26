#pragma once
#include "CoreMinimal.h"
#include "NotificationOption.h"
#include "NotificationWidgetBase.h"
#include "EventNotificationWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UEventNotificationWidget : public UNotificationWidgetBase {
    GENERATED_BODY()
public:
    UEventNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButton(const FNotificationOption& Button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHeld();
    
};

