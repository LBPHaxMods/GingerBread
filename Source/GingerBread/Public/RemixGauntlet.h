#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "OnEnemiesDefeatedDelegate.h"
#include "TimedChallenge.h"
#include "WaveEnemies.h"
#include "RemixGauntlet.generated.h"

class AActor;
class UEnemyCounterHUDComponent;

UCLASS(Blueprintable)
class ARemixGauntlet : public ATimedChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemiesDefeated OnAllEnemiesDefeated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveEnemies> Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, int32> KillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyCounterHUDComponent> EnemyCounterHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnemiesRemaining, meta=(AllowPrivateAccess=true))
    int32 EnemiesRemainingInWave;
    
public:
    ARemixGauntlet(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RecordScore_Multicast(FGingerbreadPlayerId sackboyID);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesRemaining();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnemyMurdered(AActor* Murderer, AActor* AIActor);
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyCounterHud();
    
};

