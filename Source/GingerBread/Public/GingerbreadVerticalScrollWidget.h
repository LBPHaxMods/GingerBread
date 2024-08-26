#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "GingerbreadVerticalScrollWidget.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadVerticalScrollWidget : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UGingerbreadVerticalScrollWidget();

};

