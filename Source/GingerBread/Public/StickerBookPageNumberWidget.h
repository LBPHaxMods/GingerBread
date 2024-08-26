#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StickerBookPageNumberWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStickerBookPageNumberWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UStickerBookPageNumberWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPageNumbers(int32 PageNumber, int32 TotalPages);
    
};

