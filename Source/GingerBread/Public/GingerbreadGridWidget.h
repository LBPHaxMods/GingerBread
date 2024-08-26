#pragma once
#include "CoreMinimal.h"
#include "Components/GridPanel.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadGridWidget.generated.h"

class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UGingerbreadGridWidget : public UGridPanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetGridWidgetConditional, UWidget*, InWidget, bool&, OutSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredNumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWidgetsToPrecreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClassToPrecreate;
    
    UGingerbreadGridWidget();

    UFUNCTION(BlueprintCallable)
    int32 ShiftSelectedChild(int32 Offset, int32 currentChildIdx, UWidget* widgetToMove);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetIsPriority(UWidget* ChildWidget, bool IsPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfColumns(int32 NumberOfColumns);
    
    UFUNCTION(BlueprintCallable)
    int32 ResetGrid(int32 currentChildIdx, UWidget* widgetToMove, int32& numberOfSwappedPositions);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPrecreateWidgets();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetWidgetInGridPositionConditional(int32 Column, int32 Row, bool ReturnClosestInRow, const UGingerbreadGridWidget::FGetGridWidgetConditional& ExtraConditional);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetWidgetInGridPosition(int32 Column, int32 Row, bool ReturnClosestInRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumColumns() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UWidget*> GetChildrenWidgets();
    
    UFUNCTION(BlueprintCallable)
    void CreateWidgetsBatch(int32 NumToCreate, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& CreatedWidgetsOut);
    
    UFUNCTION(BlueprintCallable)
    void CompactGrid();
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateIdealNumberOfColumnsForWidth(float Width, bool FillExcessWidth);
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateIdealNumberOfColumns();
    
    UFUNCTION(BlueprintCallable)
    void AddChildToNextGridSlot(UWidget* Child);
    
};

