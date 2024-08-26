#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "VoidSelect_HUDWidgetBase.generated.h"

class UVoidSelectWidgetMainBase;

UCLASS(Blueprintable, EditInlineNew)
class UVoidSelect_HUDWidgetBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoidSelectWidgetMainBase* VoidSelectWidget;
    
    UVoidSelect_HUDWidgetBase();

};

