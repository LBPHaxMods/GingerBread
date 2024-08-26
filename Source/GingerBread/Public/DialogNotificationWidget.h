#pragma once
#include "CoreMinimal.h"
#include "EButtonNames.h"
#include "NotificationWidgetBase.h"
#include "TEAInputType.h"
#include "DialogNotificationWidget.generated.h"

class UTexture2D;
class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UDialogNotificationWidget : public UNotificationWidgetBase {
    GENERATED_BODY()
public:
    UDialogNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTriangle(bool bShow, const FText& Text, bool useButtonOverride, EButtonNames buttonOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& Text, UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSoftIcon(const TSoftObjectPtr<UTexture2D>& softIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelect(bool bShow, const FText& Text, bool useButtonOverride, EButtonNames buttonOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputType(TEAInputType inputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconScale(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDynamicIcon(const UTexture2DDynamic* dynamicIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBody(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBack(bool bShow, const FText& Text, bool useButtonOverride, EButtonNames buttonOverride);
    
    UFUNCTION(BlueprintCallable)
    void OnActionSelect(int32 Action);
    
};

