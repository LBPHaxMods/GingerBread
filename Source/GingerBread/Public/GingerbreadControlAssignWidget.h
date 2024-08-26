#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "GingerbreadControlAssignWidget.generated.h"

class AGingerbreadPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadControlAssignWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGamepad;
    
public:
    UGingerbreadControlAssignWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisualData(bool showLeft, bool showRight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowReadyUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideReadyUI();
    
};

