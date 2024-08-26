#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidget.h"
#include "PSCompete_HUDWidgetBase.generated.h"

class UPSCompeteEndScreenBase;

UCLASS(Blueprintable, EditInlineNew)
class UPSCompete_HUDWidgetBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPSCompeteEndScreenBase* PSCompeteEndScreenWidget;
    
    UPSCompete_HUDWidgetBase();

};

