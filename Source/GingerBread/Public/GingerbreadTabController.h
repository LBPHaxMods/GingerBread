#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "UITabData.h"
#include "GingerbreadTabController.generated.h"

class UPanelWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadTabController : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LeftTabbedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* RightTabbedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LeftSlotAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RightSlotAnimation;
    
    UGingerbreadTabController();

    UFUNCTION(BlueprintCallable)
    FUITabData SwapToTabByName(FName TabName);
    
    UFUNCTION(BlueprintCallable)
    FUITabData SwapToPreviousTab();
    
    UFUNCTION(BlueprintCallable)
    FUITabData SwapToNextTab();
    
    UFUNCTION(BlueprintCallable)
    void InitTabController(UPanelWidget* LeftPanelTab, UPanelWidget* RightPanelTab, UWidgetAnimation* LeftEnterAnim, UWidgetAnimation* RightEnterAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUITabData GetTabData(FName TabName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUITabData GetPreviousTabData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUITabData GetNextTabData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUITabData GetCurrentTabData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUITabData> GetAllTabData() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoesTabExist(FName TabName);
    
    UFUNCTION(BlueprintCallable)
    void AddWidgetTab(FName TabName, UWidget* WidgetTabHeader, UWidget* WidgetTabPage);
    
};

