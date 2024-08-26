#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "EWidgetListEaseFunction.h"
#include "EWidgetListNavigation.h"
#include "Templates/SubclassOf.h"
#include "WidgetListItemData.h"
#include "GingerbreadWidgetList.generated.h"

class UGingerbreadWidgetList_Item;
class UUserWidget;

UCLASS(Blueprintable)
class UGingerbreadWidgetList : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWidgetListItemClickDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIWidgetListAnimEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIWidgetDataUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIWidgetListAnimEvent OnSingleShiftAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIWidgetListAnimEvent OnGroupShiftAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIWidgetDataUpdated OnWidgetDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetListItemClickDelegate OnWidgetClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadWidgetList_Item> mWidgetItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> mHighlightedBackgroundWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> mFullBackgroundWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin mItemPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbUseCentrePaddingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin mCentreItemPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWidgetListNavigation::Type> mNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbCircular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 miEdgeSnapClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfCloseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWidgetListEaseFunction::Type> mCloseEaseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfOpenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWidgetListEaseFunction::Type> mOpenEaseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfShiftTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfShiftGroupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWidgetListEaseFunction::Type> mShiftEaseFunction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadWidgetList_Item*> mItemWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* mpFullBackgroundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* mpHighlightedBackgroundWidget;
    
public:
    UGingerbreadWidgetList();

    UFUNCTION(BlueprintCallable)
    int32 ToggleSelectionOnCurrent();
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(int32 Index, bool selected, bool updateWidgets);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSelection(int32 Total);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TArray<FWidgetListItemData>& Data, int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentIndex(int32 Index, bool bGroupShiftAnimate);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bForce, bool bFromCenter);
    
    UFUNCTION(BlueprintCallable)
    bool OffsetCurrentIndex(int32 Offset, bool bGroupShiftAnimate);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToPreviousItem();
    
    UFUNCTION(BlueprintCallable)
    bool MoveToNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAtStart();
    
    UFUNCTION(BlueprintCallable)
    bool IsAtEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelected(TArray<int32>& selected) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWidgets() const;
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetHighlightBackgroundWidget();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetFullBackgroundWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEdgeSnapOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWidgetListItemData> GetData() const;
    
    UFUNCTION(BlueprintCallable)
    UGingerbreadWidgetList_Item* GetContentWidgetFromCenter(int32 CenterOffset);
    
    UFUNCTION(BlueprintCallable)
    UGingerbreadWidgetList_Item* GetContentWidgetForDataIndex(int32 DataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CurrentIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bForce, bool bFromCenter);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};

