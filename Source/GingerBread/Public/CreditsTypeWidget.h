#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsTableRow.h"
#include "CreditsTypeWidget.generated.h"

class UCreditsPropertyMap;
class UGingerbreadWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCreditsTypeWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsTableRow CreditsData;
    
public:
    UCreditsTypeWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCreditsData(FCreditsTableRow NewCreditsData, UCreditsPropertyMap* PropertiesMap, UGingerbreadWidget* ParentWidget);
    
};

