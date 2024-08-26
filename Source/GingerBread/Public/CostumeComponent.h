#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CostumeComponentInitialisedDelegate.h"
#include "CostumeItemEquipDescriptor.h"
#include "CostumeItemsEquippedDelegate.h"
#include "CostumeItemsPreviewedDelegate.h"
#include "ECostumeItemCategory.h"
#include "ECostumeItemVisualSize.h"
#include "EPlayerJoinDirection.h"
#include "EquippedItem.h"
#include "GingerbreadPlayerId.h"
#include "MergedCostumeItemsAppliedDelegate.h"
#include "SackboyBlueprintComponent_Base.h"
#include "CostumeComponent.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCostumeComponent : public USackboyBlueprintComponent_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentMeshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseIndividualMeshParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetMasterPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldHandleEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeComponentInitialised OnInitialised;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeItemsEquipped OnCostumeItemsEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeItemsPreviewed OnCostumeItemsPreviewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMergedCostumeItemsApplied OnMergedCostumeItemsApplied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquippedItem> m_equippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquippedItem> m_sackboyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquippedItem> m_previewItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedDynamicMaterials;
    
public:
    UCostumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMeshPartsByOcclusion(int32 OcclusionMask);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityOnEquippedItemByCategory(ECostumeItemCategory InCategory, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItemsTickEnabled(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void RemovePreviewItems();
    
    UFUNCTION(BlueprintCallable)
    void RemovePreviewItemByCategory(ECostumeItemCategory InCategory, bool bUpdateHiddenEquippedItems);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquippedItemsByName(const TArray<FName>& ItemNames);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquippedItems();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquippedItemByCategory(ECostumeItemCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquippedCostumeByName(const FName costumeName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColourTintFromPreviewItem(const FName& CostumeItemName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColourTintFromPreviewCategory(ECostumeItemCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColourTintFromEquippedItem(const FName& CostumeItemName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColourTintFromEquippedCategory(ECostumeItemCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool PreviewItemsByName(const TArray<FName>& ItemNames, bool HideAllEquipped);
    
    UFUNCTION(BlueprintCallable)
    bool PreviewItemsAndColourTintByName(const TArray<FCostumeItemEquipDescriptor>& ItemNamesAndColourTints, bool HideAllEquipped);
    
    UFUNCTION(BlueprintCallable)
    bool PreviewCostumeOnlyUnlockedItemsByName(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, bool HideAllEquipped);
    
    UFUNCTION(BlueprintCallable)
    bool PreviewCostumeByName(const FName costumeName, bool HideAllEquipped);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeave(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced);
    
    UFUNCTION(BlueprintCallable)
    bool IsNamedItemOccludedByItems(FName ItemName, const TArray<FCostumeItemEquipDescriptor>& OccludingItems);
    
    UFUNCTION(BlueprintCallable)
    bool IsNamedItemCoveredByItems(FName ItemName, const TArray<FCostumeItemEquipDescriptor>& OccludingItems);
    
    UFUNCTION(BlueprintCallable)
    bool IsItemEquipped(const FName& ItemName);
    
    UFUNCTION(BlueprintCallable)
    bool IsInitialised();
    
    UFUNCTION(BlueprintCallable)
    void HideCostumeItemsByOcclusionCoverMask(int32 OcclusionMask);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfEquippedItems();
    
    UFUNCTION(BlueprintCallable)
    ECostumeItemVisualSize GetEquippedItemsVisualSize();
    
    UFUNCTION(BlueprintCallable)
    bool GetEquippedItemsTickEnabled();
    
    UFUNCTION(BlueprintCallable)
    void GetEquippedItemsAndTints(TArray<FCostumeItemEquipDescriptor>& EquippedItems);
    
    UFUNCTION(BlueprintCallable)
    FName GetEquippedItemNameByCategory(ECostumeItemCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    FBoxSphereBounds GetBounds();
    
    UFUNCTION(BlueprintCallable)
    void GetAllEquippedMeshComponents(TArray<UMeshComponent*>& MeshComponents);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> FilterCostumeItemsByOcclusionCoverMask(const TArray<FName>& ItemNames, int32 OcclusionMask);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItemsByName(const TArray<FName>& ItemNames, bool UnequipExistingOnLoad);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItemsAndColourTintByNameForced(const TArray<FCostumeItemEquipDescriptor>& ItemNamesAndColourTinks, bool UnequipExistingOnLoad);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItemsAndColourTintByName(const TArray<FCostumeItemEquipDescriptor>& ItemNamesAndColourTints, bool UnequipExistingOnLoad);
    
    UFUNCTION(BlueprintCallable)
    bool EquipCostumeOnlyUnlockedItemsByName(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, bool UnequipExistingOnLoad);
    
    UFUNCTION(BlueprintCallable)
    bool EquipCostumeByName(const FName costumeName, bool UnequipExistingOnLoad);
    
    UFUNCTION(BlueprintCallable)
    void AreItemsAndTintsEquipped(const TArray<FCostumeItemEquipDescriptor>& ItemsToCheck, bool& ItemsEquipped);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMergedCostume(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyColourTintToPreviewItem(const FName& CostumeItemName, const FName& ColourTintName);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyColourTintToPreviewCategory(ECostumeItemCategory InCategory, const FName& ColourTintName);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyColourTintToEquippedItem(const FName& CostumeItemName, const FName& ColourTintName);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyColourTintToEquippedCategory(ECostumeItemCategory InCategory, const FName& ColourTintName);
    
};

