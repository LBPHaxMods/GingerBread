#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeDataAsset.h"
#include "WaveEnemies.h"
#include "RemixGauntletDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class URemixGauntletDataAsset : public UTimedChallengeDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveEnemies> Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> SpawnPoints;
    
    URemixGauntletDataAsset();

};

