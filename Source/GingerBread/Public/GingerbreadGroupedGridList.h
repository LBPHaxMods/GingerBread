#pragma once
#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "Templates/SubclassOf.h"
#include "UIGroupedGridListCategory.h"
#include "GingerbreadGroupedGridList.generated.h"

class UGingerbreadGroupedGridList_Grid;
class UGingerbreadWidgetElement;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UGingerbreadGroupedGridList : public UVerticalBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> GridHeaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadGroupedGridList_Grid> GridWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIGroupedGridListCategory> ListCategories;
    
    UGingerbreadGroupedGridList();

    UFUNCTION(BlueprintCallable)
    void SetUpExitListLink(UGingerbreadWidgetElement* ExitLink);
    
    UFUNCTION(BlueprintCallable)
    void SetRightExitListLink(UGingerbreadWidgetElement* ExitLink);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftExitListLink(UGingerbreadWidgetElement* ExitLink);
    
    UFUNCTION(BlueprintCallable)
    void SetDownExitListLink(UGingerbreadWidgetElement* ExitLink);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryVisibility(const FUIGroupedGridListCategory& Category, bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetAllCategoriesToDesiredColumnCountForWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    void SetAllCategoriesColumnWidth(int32 ColumnWidth);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCategory(const FName GridListCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllCategories();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAllNavigationLinks();
    
    UFUNCTION(BlueprintCallable)
    void RecalulateSurroundingCategoryLinks(const FUIGroupedGridListCategory& Category);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateCategoryLinks(const FUIGroupedGridListCategory& Category);
    
    UFUNCTION(BlueprintCallable)
    void MoveCategory(const FName GridListCategoryName, int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetWidgetsInGrids(TArray<UWidget*>& OutWidgetArray);
    
    UFUNCTION(BlueprintCallable)
    UGingerbreadWidgetElement* GetWidgetAtVerticalOffset(UGingerbreadWidgetElement* StartingWidget, int32 Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisibleCategoryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalCategoryCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLargestIdealNumberOfColumnsForWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    UGingerbreadWidgetElement* GetFirstSelectableWidget();
    
    UFUNCTION(BlueprintCallable)
    FUIGroupedGridListCategory FindCategory(const FName GridListCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void CreateWidgetsForCategory(const FName GridListCategoryName, int32 NumToCreate, TSubclassOf<UGingerbreadWidgetElement> WidgetClassToCreate, TArray<UUserWidget*>& CreatedWidgetsOut);
    
    UFUNCTION(BlueprintCallable)
    FUIGroupedGridListCategory CreateCategory(const FName GridListCategoryName, bool HasHeader, int32 ColumnWidth);
    
    UFUNCTION(BlueprintCallable)
    void CompactCategoryGrid(const FName GridListCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void AutoDisplayCategories();
    
    UFUNCTION(BlueprintCallable)
    void AddWidgetToCategory(const FName GridListCategoryName, UGingerbreadWidgetElement* WidgetToAdd);
    
};

