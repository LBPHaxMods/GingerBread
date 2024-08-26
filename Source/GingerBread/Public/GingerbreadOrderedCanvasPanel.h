#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "GingerbreadOrderedCanvasPanel.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UGingerbreadOrderedCanvasPanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UGingerbreadOrderedCanvasPanel();

    UFUNCTION(BlueprintCallable)
    void MoveChildToTop(UWidget* MovingChild);
    
    UFUNCTION(BlueprintCallable)
    void MoveChildToLayer(UWidget* MovingChild, int32 NewLayer);
    
    UFUNCTION(BlueprintCallable)
    void MoveChildToBottom(UWidget* MovingChild);
    
    UFUNCTION(BlueprintCallable)
    void MoveChildBefore(UWidget* MovingChild, UWidget* ContextChild);
    
    UFUNCTION(BlueprintCallable)
    void MoveChildAfter(UWidget* MovingChild, UWidget* ContextChild);
    
};

