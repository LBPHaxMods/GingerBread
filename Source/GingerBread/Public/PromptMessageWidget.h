#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "PromptButtonActionDelegate.h"
#include "PromptMessageWidget.generated.h"

class AGingerbreadPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class UPromptMessageWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptButtonAction TheButtonAction;
    
    UPromptMessageWidget();

    UFUNCTION(BlueprintCallable)
    void ExecuteAction(AGingerbreadPlayerController* PlayerController);
    
};

