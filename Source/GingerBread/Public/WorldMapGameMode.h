#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELevelBadgeType.h"
#include "ELevelType.h"
#include "EWorldMapGameModeState.h"
#include "GingerbreadGameMode.h"
#include "HostSaveDataReadyDelegate.h"
#include "WorldLevelRow.h"
#include "WorldMapGameMode.generated.h"

class ALevelBadge;
class ARegistrar;
class AWorldMapGameState;
class AWorldMapPod;
class UDebugMenuComponent;
class UGingerBreadGameInstance;
class ULevelCompletionSequence;
class UScreenTransitionsHUDComponent;
class USpawnPointComponent;
class UTexture;
class UWorldDebugMenuComponent;

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API AWorldMapGameMode : public AGingerbreadGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StartChanceBonusSpawnTriggerLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelCompletionSequence* LevelCompletionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType CurrentWorldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnteringGameLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldMapGameModeState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture*> ThumbnailTextures;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHostSaveDataReady OnHostSaveDataReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplashTransitionScreenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerBreadGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugMenuComponent* ActiveDebugMenu;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldMapGameState* WorldMapGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARegistrar* Registrar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldDebugMenuComponent* WorldDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnPointComponent* StartingSpawnPoint;
    
public:
    AWorldMapGameMode(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ShowTransitionScreen();
    
    UFUNCTION(BlueprintCallable)
    void PopulateNotifications();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHostDataSaveDataReady();
    
    UFUNCTION(BlueprintCallable)
    void LockLevels(int32 ZoneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneLocked(const int32 ZoneID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelUnlocked(const int32 LevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelLocked(const int32 LevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedRemixInDifferentWorld(ELevelType& OtherWorldID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasJustUnlockedLevelType(ELevelBadgeType LevelType, FWorldLevelRow& OutLevelRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelType GetWorldID() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScreenTransitionsHUDComponent* GetTransitionScreen() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStaticDataFromID(int32 LevelID, FWorldLevelRow& StaticData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWorldMapPod* GetPodActor() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetLevelThumbnail(const FName ThumbnailID);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelIDs(const FName& MapName, ELevelType& WorldID, ELevelType& WorldStyle, int32& LevelID, bool& bFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetGameLevelBadge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBadgeFromRow(const FDataTableRowHandle& Row, ALevelBadge*& LevelBadge, FWorldLevelRow& LevelData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetBadgeByID(int32 LevelID) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DismissTransitionScreen();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelLaunch(const int32 LevelID) const;
    
};

