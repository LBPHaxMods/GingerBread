#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "NotificationWidgetBase.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNotificationWidgetBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideAnim;
    
public:
    UNotificationWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHideFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hide();
    
};

