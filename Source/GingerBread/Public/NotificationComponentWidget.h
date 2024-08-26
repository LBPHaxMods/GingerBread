#pragma once
#include "CoreMinimal.h"
#include "EGingerbreadNotification.h"
#include "NotificationWidgetBase.h"
#include "NotificationComponentWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNotificationComponentWidget : public UNotificationWidgetBase {
    GENERATED_BODY()
public:
    UNotificationComponentWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UNotificationWidgetBase* Add(EGingerbreadNotification::Type eType);
    
};

