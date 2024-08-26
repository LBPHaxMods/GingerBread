#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELevelType.h"
#include "EPlayerJoinDirection.h"
#include "ETournamentStatus.h"
#include "GingerbreadPlayerId.h"
#include "ActivitiesSystem.generated.h"

class UActivitiesTables;
class UActivityObject;
class UDataTable;
class UDirectLoadingSystem;
class UMatchesSystem;
class UStringTable;

UCLASS(Blueprintable)
class GINGERBREAD_API UActivitiesSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UActivityObject*> PendingActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivitiesTables* TablesHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatchesSystem* MatchesSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDirectLoadingSystem* DirectLoadingSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* ActivityStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActivityTranslationStrings;
    
public:
    UActivitiesSystem();

    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void NotifyZoneUnlocked_BP(const ELevelType InWorldID, int32 InZoneID);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTournamentStatusChanged(FName TournamentID, ETournamentStatus NewStaus);
    
    UFUNCTION(BlueprintCallable)
    void NotifySelectedKnightTrial();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBossFightBegin();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBossDefeated();
    
};

