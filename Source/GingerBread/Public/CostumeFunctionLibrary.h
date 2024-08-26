#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Costume.h"
#include "CostumeHangerData.h"
#include "CostumeItem.h"
#include "CostumeItemEquipDescriptor.h"
#include "CostumeItemQuery.h"
#include "CostumeQuery.h"
#include "CostumeTintColour.h"
#include "EEquippedCostumeType.h"
#include "ELevelType.h"
#include "EquippedCostumeData.h"
#include "GingerbreadPlayerId.h"
#include "UnlockDetails.h"
#include "CostumeFunctionLibrary.generated.h"

class UCostumeManager;
class UMeshComponent;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UCostumeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCostumeFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateHangerName(int32 HangerIndex, const FText& HangerName, const FGingerbreadPlayerId& PlayerId, bool& HangerUpdated, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateHangerCostumeItems(int32 HangerIndex, const TArray<FCostumeItemEquipDescriptor>& CostumeItems, const FGingerbreadPlayerId& PlayerId, bool& HangerUpdated, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSavedEquippedItems(const FGingerbreadPlayerId& PlayerId, const TArray<FCostumeItemEquipDescriptor>& EquippedItems, bool& Saved, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSavedEquippedHanger(const FGingerbreadPlayerId& PlayerId, const int32 HangerIndex, bool& Saved, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSavedEquippedCostume(const FGingerbreadPlayerId& PlayerId, const FName& EquippedCostume, bool& Saved, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSavedCostumeItemColourTint(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, const FName& ColourTint, bool& Success, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveSavedCostumeItemColourTint(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, bool& Success, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemoveNonOwnedItems(UPARAM(Ref) TArray<FCostumeItemEquipDescriptor>& CostumeItems, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveHanger(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, bool& HangerRemoved, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkCostumeUnlocked(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkCostumeNotNew(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkCostumeItemUnlocked(const FName& CostumeItemName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkCostumeItemNotNew(const FName& CostumeItemName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkCostumeAndItemsUnlocked(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkColourTintUnlocked(const FName& ColourTint, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkColourTintNotNew(const FName& ColourTint, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IsAnyLocalPlayerUsingCostume(const FName& costumeName, bool& IsUsed, FGingerbreadPlayerId& UsingPlayer, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUnlockedCostumes(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeQuery>& CostumesOut, bool& FoundCostumes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUnlockedCostumeItemTintColours(const FGingerbreadPlayerId& PlayerId, TMap<FName, FCostumeTintColour>& CostumeTintColoursOut, bool& FoundCostumeTintColours, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUnlockedCostumeItems(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeItemQuery>& CostumeItemsOut, bool& FoundCostumeItems, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSelectedCostume(const FGingerbreadPlayerId& PlayerId, FEquippedCostumeData& CostumeData, bool& Found, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSavedEquippedItems(const FGingerbreadPlayerId& PlayerId, TArray<FCostumeItemEquipDescriptor>& EquippedItems, bool& Success, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSavedEquippedHanger(const FGingerbreadPlayerId& PlayerId, int32& HangerIndex, bool& Success, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSavedEquippedCostume(const FGingerbreadPlayerId& PlayerId, FName& EquippedCostume, bool& Success, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSavedCostumeItemColourTintName(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, FName& ColourTint, bool& Found, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSavedCostumeItemColourTint(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, FCostumeTintColour& ColourTint, bool& Found, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumCostumeSetsCompleted(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumCostumePiecesCollected(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, bool bExcludeDefaultItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetNumberOfHangers(const FGingerbreadPlayerId& PlayerId, int32& NumHangers, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLocalUnusedCostume(const TArray<FName>& ValidCostumes, bool& Found, FName& UnusedCostumeName, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetHangers(const FGingerbreadPlayerId& PlayerId, TArray<FCostumeHangerData>& CostumeHangers, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetHangerIndex(int32 HangerID, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetHangerID(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetHanger(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, FCostumeHangerData& CostumeHanger, bool& HangerFound, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetEquippedCostumeType(const FGingerbreadPlayerId& PlayerId, EEquippedCostumeType& EquippedCostumeType, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCostumeUnlockDetails(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, FUnlockDetails& UnlockDetails, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCostumesByWorld(const TArray<ELevelType>& WorldIDs, TMap<FName, FCostume>& CostumesOut, bool& FoundCostumes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCostumeManager* GetCostumeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCostumeItemUnlockDetails(const FName& CostumeItemName, const FGingerbreadPlayerId& PlayerId, FUnlockDetails& UnlockDetails, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCostumeItemsByWorld(const TArray<ELevelType>& WorldIDs, TMap<FName, FCostumeItem>& CostumeItemsOut, bool& FoundCostumeItems, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetContainsNewCostumesOrItems(const FGingerbreadPlayerId& PlayerId, bool& ContainsNewCostumes, bool& ContainsNewCostumeItems, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetColourTintUnlockDetails(const FName& ColourTint, const FGingerbreadPlayerId& PlayerId, FUnlockDetails& UnlockDetails, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCollectedPercentage(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllCostumes(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeQuery>& CostumesOut, bool& FoundCostumes, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllCostumeItems(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeItemQuery>& CostumeItemsOut, bool& FoundCostumeItems, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FindChildCostumeMeshComponents(const UMeshComponent* ParentMeshComponent, TArray<UMeshComponent*>& ChildCostumeMeshes);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyMeshComponent(UMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyChildCostumeMeshComponents(const UMeshComponent* ParentMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* CreateChildMeshComponent(USkeletalMeshComponent* ParentMeshComponent, USkeletalMesh* ChildMesh, bool SetMasterPose);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearSavedEquipped(const FGingerbreadPlayerId& PlayerId, bool& Cleared, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearHangerCostumeItems(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, bool& ItemsCleared, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddHanger(const FCostumeHangerData& CostumeHanger, const FGingerbreadPlayerId& PlayerId, int32& HangerIndex, bool& HangerAdded, const UObject* WorldContextObject);
    
};

