#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StickerBookPageWidget.generated.h"

class UStickerBookPageIconWidget;
class UStickerBookPageNumberWidget;
class UStickerBookPageTitleWidget;
class UStickerBookStickerWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UStickerBookPageWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStickerBookStickerWidget*> StickersOnPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStickerBookPageTitleWidget* TitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PageNumberWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStickerBookPageNumberWidget* PageNumberWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PageIconWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStickerBookPageIconWidget* PageIconWidget;
    
public:
    UStickerBookPageWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPageInfo(const FText& PageTitle, bool IsPageUnknown, int32 PageNumber, int32 NumPages, UTexture2D* PageIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPageDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPageCompleted() const;
    
};

