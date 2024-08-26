#pragma once
#include "CoreMinimal.h"
#include "CircularTextWidget.h"
#include "EPrizeBubbleType.h"
#include "PrizeBubbleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPrizeBubbleWidget : public UCircularTextWidget {
    GENERATED_BODY()
public:
    UPrizeBubbleWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateText(EPrizeBubbleType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetTextForPrizeType(EPrizeBubbleType Type);
    
};

