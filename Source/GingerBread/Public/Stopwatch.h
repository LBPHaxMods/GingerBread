#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GingerbreadPlayerId.h"
#include "OnCountdownExpiredDelegate.h"
#include "Stopwatch.generated.h"

class ASackboy;
class UTimerHUDComponent;

UCLASS(Blueprintable)
class AStopwatch : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownExpired OnCountdownExpiredCallback;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimerHUDComponent* TimerHUDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SilverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BronzeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlarmSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, float> TimePenaltyRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, float> TimeRewardRecord;
    
public:
    AStopwatch(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrackPlayerTimeChange(ASackboy* Sackboy, float TimeChange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetWinner(ASackboy* WinningSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGingerbreadPlayerId, float> GetTotalPlayerTimeMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGingerbreadPlayerId, float> GetRewardMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGingerbreadPlayerId, float> GetPenaltyMap() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustTime(float AdjustmentTime, AActor* Culprit);
    
};

