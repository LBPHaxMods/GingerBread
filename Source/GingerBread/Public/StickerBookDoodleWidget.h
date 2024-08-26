#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StickerBookDoodleWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStickerBookDoodleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UStickerBookDoodleWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisible(bool visible, bool animate);
    
};

