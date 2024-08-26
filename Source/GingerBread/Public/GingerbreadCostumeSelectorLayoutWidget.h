#pragma once
#include "CoreMinimal.h"
#include "EUICostumeNamePosition.h"
#include "GingerbreadWidget.h"
#include "GingerbreadCostumeSelectorLayoutWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadCostumeSelectorLayoutWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerNameContainerWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOnLeftAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOnRightAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUICostumeNamePosition> NamePositions;
    
    UGingerbreadCostumeSelectorLayoutWidget();

    UFUNCTION(BlueprintCallable)
    void InitializeCostumeSelectors(UPARAM(Ref) TArray<UGingerbreadWidget*>& Selectors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSelectorSlots(TArray<UCanvasPanel*>& CanvasSlots);
    
};

