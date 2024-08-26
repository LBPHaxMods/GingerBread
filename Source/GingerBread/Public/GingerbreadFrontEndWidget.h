#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "GingerbreadFrontEndWidget.generated.h"

class UNamedSlot;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadFrontEndWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* TransitionWidgetSlot;
    
    UGingerbreadFrontEndWidget();

};

