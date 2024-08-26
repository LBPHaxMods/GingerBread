#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELevelType.h"
#include "EStickerBookTabType.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "StickerBookPageInstance.h"
#include "StickerBookTabData.h"
#include "StickerBookTabStaticData.h"
#include "StickerBookWidgetInstance.h"
#include "StickerBookHUDComponent.generated.h"

class UStickerBookStickerWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStickerBookHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PageResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PageColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnknownPageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStickerBookTabType> DesiredTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStickerBookTabType> UsedTabOrder;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickerBookTabStaticData TabStaticData[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStickerBookWidgetInstance> WidgetPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStickerBookTabType, FStickerBookTabData> TabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickerBookPageInstance PrimaryPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickerBookPageInstance SecondaryPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStickerBookStickerWidget*> StickersPendingUnlock;
    
public:
    UStickerBookHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateBookOfDreamsAchievement() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPageVisible(UPARAM(Ref) FStickerBookPageInstance& StickerPage, bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetPageNumber(UPARAM(Ref) FStickerBookPageInstance& StickerPage, int32 PageNumber);
    
    UFUNCTION(BlueprintCallable)
    void SaveStickersAsUnlocked(UPARAM(Ref) TArray<UStickerBookStickerWidget*>& Stickers);
    
    UFUNCTION(BlueprintCallable)
    void SaveStickerAsUnlocked(UStickerBookStickerWidget* Sticker);
    
    UFUNCTION(BlueprintCallable)
    void SavePageAsOpen(int32 PageNumber);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSaveLoaded(const FGingerbreadPlayerId& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabTypeValid(EStickerBookTabType TabType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPageNumberValid(int32 PageNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPageCompleted(int32 PageNumber) const;
    
    UFUNCTION(BlueprintCallable)
    void InitialiseStickerBook();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ELevelType> GetUnlockedWorlds() const;
    
    UFUNCTION(BlueprintCallable)
    FStickerBookTabStaticData GetTabStaticData(EStickerBookTabType TabType);
    
    UFUNCTION(BlueprintCallable)
    void GetTabsBefore(EStickerBookTabType TabType, bool Inclusive, TArray<EStickerBookTabType>& TabsBefore);
    
    UFUNCTION(BlueprintCallable)
    void GetTabsAfter(EStickerBookTabType TabType, bool Inclusive, TArray<EStickerBookTabType>& TabsAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStickerBookTabType GetTabBefore(EStickerBookTabType TabType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStickerBookTabType GetTabAfter(EStickerBookTabType TabType) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPreviousPageAvailable(int32 CurrentPage, bool SkipTab, int32& PreviousPage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStickerBookTabType GetPageTabType(int32 PageNumber) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPagesToTab(int32 CurrentPage, EStickerBookTabType OtherTab);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPagesInTab(EStickerBookTabType TabType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageFromSackboysLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageForWorld(ELevelType WorldType) const;
    
    UFUNCTION(BlueprintCallable)
    void GetNextPageAvailable(int32 CurrentPage, bool SkipTab, int32& NextPage);
    
    UFUNCTION(BlueprintCallable)
    void GetLastSavedPageOpen(int32& PageNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstPageAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPendingStickerUnlocks();
    
};

