#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CachedCostumeResources.h"
#include "CachedHangerThumbnails.h"
#include "Costume.h"
#include "CostumeItem.h"
#include "CostumeItemEquipDescriptor.h"
#include "CostumeThumbnails.h"
#include "CostumeTintColour.h"
#include "EThumbnailType.h"
#include "EquippedCostumeData.h"
#include "GingerbreadPlayerId.h"
#include "SackboyMeshCreateRequest.h"
#include "UnlockImplementorIface.h"
#include "UnlockableItemImplementorIface.h"
#include "CostumeManager.generated.h"

class UCostumeSettings;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class GINGERBREAD_API UCostumeManager : public UObject, public IUnlockableItemImplementorIface, public IUnlockImplementorIface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyMeshCreated, const FGingerbreadPlayerId&, PlayerId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNewThumbnailsLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCachedHangerThumbnailsLoaded, const FGingerbreadPlayerId&, PlayerId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCostumeSettings* CostumeSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyMeshCreated OnSackboyMeshCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewThumbnailsLoaded OnNewThumbnailsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedHangerThumbnailsLoaded OnCachedHangerThumbnailsLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedCostumeResources> m_cachedResourcesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, FSackboyMeshCreateRequest> PlayerSackboyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, FCostumeThumbnails> RuntimeCostumeThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, FCachedHangerThumbnails> CachedHangerThumbnails;
    
public:
    UCostumeManager();

    UFUNCTION(BlueprintCallable)
    void UnloadHangerThumbnails(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void UnloadHangerThumbnail(const FGingerbreadPlayerId& PlayerId, const FName& ThumbnailKey);
    
    UFUNCTION(BlueprintCallable)
    void UnloadCostumeResources(const TArray<FName>& ItemNames);
    
    UFUNCTION(BlueprintCallable)
    void UnloadAllHangerThumbnails();
    
    UFUNCTION(BlueprintCallable)
    bool SetupCostumeForPlayer(const FGingerbreadPlayerId& PlayerId, FName OverrideCostume, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void OnCostumeReplicated(FGingerbreadPlayerId PlayerId, FEquippedCostumeData CostumeItems);
    
    UFUNCTION(BlueprintCallable)
    bool LoadCostumeThumbnails(const FGingerbreadPlayerId& PlayerId, const FName& costumeName);
    
    UFUNCTION(BlueprintCallable)
    void LoadCostumeResources(const TArray<FName>& ItemNames);
    
    UFUNCTION(BlueprintCallable)
    bool LoadCostumeHangerThumbnails(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndCacheHangerThumbnails(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndCacheHangerThumbnail(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetThumbnailSoftPtrFromNameAndType(const FString& Name, EThumbnailType ThumbnailType);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetThumbnailSoftPtrFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnail(const FGingerbreadPlayerId& PlayerId, EThumbnailType ThumbnailType);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* GetSackboySkeletalMesh(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDefaultCostume() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCostumeTintColours(TMap<FName, FCostumeTintColour>& CostumeTintColoursOut, bool& FoundCostumeTintColours);
    
    UFUNCTION(BlueprintCallable)
    void GetCostumeTintColour(const FName& CostumeTintColourKey, FCostumeTintColour& CostumeTintColourOut, bool& FoundCostumeTintColour);
    
    UFUNCTION(BlueprintCallable)
    void GetCostumes(TMap<FName, FCostume>& CostumesOut, bool& FoundCostumes);
    
    UFUNCTION(BlueprintCallable)
    void GetCostumeItems(TMap<FName, FCostumeItem>& CostumeItemsOut, bool& FoundCostumeItems);
    
    UFUNCTION(BlueprintCallable)
    void GetCostumeItemOwningCostumes(const FName& CostumeItemName, TArray<FName>& OwningCostumeNames, bool& FoundOwningCostumes);
    
    UFUNCTION(BlueprintCallable)
    void GetCostumeItem(const FName& CostumeItemName, FCostumeItem& CostumeItemOut, bool& FoundCostumeItem);
    
    UFUNCTION(BlueprintCallable)
    void GetCostume(const FName& costumeName, FCostume& CostumeOut, bool& FoundCostume);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetCachedHangerThumbnailSoftPtr(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex, EThumbnailType ThumbnailType);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetCachedHangerThumbnail(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex, EThumbnailType ThumbnailType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* FindFirstAvailableThumbnail(const FGingerbreadPlayerId& PlayerId) const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateCompleteSackboyMeshFromHanger(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateCompleteSackboyMeshFromCostume(const FGingerbreadPlayerId& PlayerId, const FName& costumeName);
    
    UFUNCTION(BlueprintCallable)
    bool CreateCompleteSackboyMesh(const FGingerbreadPlayerId& PlayerId, const TArray<FCostumeItemEquipDescriptor>& CostumeItems);
    
    UFUNCTION(BlueprintCallable)
    void CheckForCostumePermissions(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllResourcesLoaded(const FGingerbreadPlayerId& PlayerId) const;
    

    // Fix for true pure virtual functions not being implemented
};

