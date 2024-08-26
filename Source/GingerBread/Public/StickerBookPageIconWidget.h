#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StickerBookPageIconWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UStickerBookPageIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UStickerBookPageIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPageIcon(UTexture2D* PageIcon, bool IsPageUnknown);
    
};

