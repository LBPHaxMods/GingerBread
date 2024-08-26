#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "TEAInputType.h"
#include "GingerbreadActionIconWidget.generated.h"

class AGingerbreadPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadActionIconWidget : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UGingerbreadActionIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitialiseActionIconWidget(AGingerbreadPlayerController* PlayerController, FName ActionName, TEAInputType inputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionIcon_SetHeight(float Height);
    
};

