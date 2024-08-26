#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GingerbreadCursor.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadCursor : public UUserWidget {
    GENERATED_BODY()
public:
    UGingerbreadCursor();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateCursorScaling(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScaleUpdated(float Scale);
    
};

