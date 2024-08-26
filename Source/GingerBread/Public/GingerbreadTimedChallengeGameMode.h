#pragma once
#include "CoreMinimal.h"
#include "EObjectValidity.h"
#include "GingerbreadGameMode.h"
#include "GingerbreadTimedChallengeGameMode.generated.h"

class AActor;
class AGingerbreadTimedChallengeGameMode;
class UObject;

UCLASS(Blueprintable, NonTransient)
class AGingerbreadTimedChallengeGameMode : public AGingerbreadGameMode {
    GENERATED_BODY()
public:
    AGingerbreadTimedChallengeGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsPendingReset(bool bPendingReset);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActivatedEndSequenceSpawnPoint(bool bActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingReset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivatedEndSequenceSpawnPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HACK_OnLevelResetManagerAvailable(AActor* Manager);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTimedChallengeGameMode(const UObject* WorldContextObject, AGingerbreadTimedChallengeGameMode*& TimedChallengeGameMode, EObjectValidity& Out_GameModeValidity);
    
};

