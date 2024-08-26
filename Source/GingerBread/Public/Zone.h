#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EZoneLockedCriteria.h"
#include "WorldZoneRow.h"
#include "Zone.generated.h"

class ACameraArea;
class ALevelBadge;
class AOrbGate;
class APhaseBomb;
class UZoneDebugMenuComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NarrativeTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Wall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOrbGate* OrbGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhaseBomb*> ActivatedPhaseBombs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* LockedPreviewCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ZoneBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelBadge*> PrecedingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZoneDebugMenuComponent* ZoneDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PreviousLevelNotCompletedVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> InsufficientOrbsVO;
    
    AZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetZoneLocked(bool bLocked, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void RevealPhaseBridge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockStateChanged(bool bLocked, bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostSaveDataReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZoneID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStaticData(FWorldZoneRow& Row);
    
    UFUNCTION(BlueprintCallable)
    FText GetNextPreviousLevelNotCompletedVO();
    
    UFUNCTION(BlueprintCallable)
    FText GetNextInsufficientOrbsVO();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCriteriaPreventingUnlock(TArray<EZoneLockedCriteria>& Criteria) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginUnlockSequence();
    
};

