#pragma once
#include "CoreMinimal.h"
#include "NotificationWidgetBase.h"
#include "ProgressNotificationWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UProgressNotificationWidget : public UNotificationWidgetBase {
    GENERATED_BODY()
public:
    UProgressNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(const int32& Previous, const int32& current, const int32& Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FText& DisplayName, const FText& Description, UTexture2D* Icon);
    
};

