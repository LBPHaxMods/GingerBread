#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StickerBookPageTitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStickerBookPageTitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UStickerBookPageTitleWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPageTitle(const FText& PageTitle, bool IsPageUnknown);
    
};

