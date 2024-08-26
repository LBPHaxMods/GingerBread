#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadTournamentStatusChangedDelegate.h"
#include "GingerbreadTournamentTriggerLevelIridescenceDelegate.h"
#include "TournamentManager.generated.h"

class ULeaderboardManager;
class UTournamentManager;

UCLASS(Blueprintable)
class GINGERBREAD_API UTournamentManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadTournamentStatusChanged OnTournamentStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadTournamentTriggerLevelIridescence OnTriggerLevelIridescence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULeaderboardManager* LeaderboardManager;
    
public:
    UTournamentManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTournamentTitleStorageChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTournamentsModeAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereAnyActiveTournament() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLevelInTournamentMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLevelActiveTournamentLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTournamentTermsAccepted(const FName InTournamentID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRemainingTimeToStart(const FName InTournamentID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRemainingTimeToEnd(const FName InTournamentID) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTournamentManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFirstActiveTournamentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveTournamentSavedBestTime(FTimespan& OutTimespan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveOrUpcomingTournamentID() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckForTournamentChange();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AcceptTournamentTerms(const FName InTournamentID, bool bShouldSave);
    
};

