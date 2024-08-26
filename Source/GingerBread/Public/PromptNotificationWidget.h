#pragma once
#include "CoreMinimal.h"
#include "NotificationWidgetBase.h"
#include "PromptNotification.h"
#include "PromptNotificationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPromptNotificationWidget : public UNotificationWidgetBase {
    GENERATED_BODY()
public:
    UPromptNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFromData(const FPromptNotification& PromptData);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHeld();
    
};

